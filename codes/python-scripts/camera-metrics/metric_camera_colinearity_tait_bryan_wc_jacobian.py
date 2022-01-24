from sympy import *
import sys
sys.path.insert(1, '..')
from tait_bryan_R_utils import *
from rodrigues_R_utils import *
from quaternion_R_utils import *

ksi_0, eta_0, c = symbols('ksi_0 eta_0 c');
tx, ty, tz = symbols('tx ty tz')
om, fi, ka = symbols('om fi ka')
#sx, sy, sz = symbols('sx sy sz')
#q0, q1, q2, q3 = symbols('q0 q1 q2 q3')
px, py, pz = symbols('px py pz'); 
ksi_kp, eta_kp = symbols('ksi_kp eta_kp')

position_symbols = [tx, ty, tz]
orientation_symbols = [om, fi, ka]
#orientation_symbols = [sx, sy, sz]
#orientation_symbols = [q0, q1, q2, q3]
point_symbols = [px, py, pz]
all_symbols = position_symbols + orientation_symbols + point_symbols

RT_wc = matrix44FromTaitBryan(tx, ty, tz, om, fi, ka)
#RT_wc = matrix44FromRodrigues(tx, ty, tz, sx, sy, sz)
#RT_wc = matrix44FromQuaternion(tx, ty, tz, q0, q1, q2, q3)
r=RT_wc[:-1,:-1]
t=Matrix([tx, ty, tz]).vec()

denom=r[0,2]*(px-t[0]) + r[1,2]*(py-t[1]) + r[2,2]*(pz-t[2])
ksi=ksi_0 - c * ( r[0,0]*(px-t[0]) + r[1,0]*(py-t[1]) + r[2,0]*(pz-t[2]) ) /denom
eta=eta_0 - c * ( r[0,1]*(px-t[0]) + r[1,1]*(py-t[1]) + r[2,1]*(pz-t[2]) ) /denom
ksi_delta = ksi_kp - ksi;
eta_delta = eta_kp - eta;
obs = Matrix([ksi, eta]).vec()

target_value = Matrix([ksi_kp,eta_kp]).vec()
model_function = Matrix([ksi,eta]).vec()

obs_eq = target_value - model_function
obs_eq_jacobian = obs_eq.jacobian(all_symbols)

print(obs_eq)
print(obs_eq_jacobian)


with open("metric_camera_colinearity_tait_bryan_wc_jacobian.h",'w') as f_cpp:  
    f_cpp.write("inline void metric_camera_colinearity_tait_bryan_wc(double &ksi, double &eta, double ksi_0, double eta_0, double c, double tx, double ty, double tz, double om, double fi, double ka, double px, double py, double pz)\n")
    f_cpp.write("{")
    f_cpp.write("ksi = %s;\n"%(ccode(obs[0,0])))
    f_cpp.write("eta = %s;\n"%(ccode(obs[1,0])))
    f_cpp.write("}")
    f_cpp.write("\n")
    f_cpp.write("inline void observation_equation_metric_camera_colinearity_tait_bryan_wc(Eigen::Matrix<double, 2, 1> &delta, double ksi_0, double eta_0, double c, double tx, double ty, double tz, double om, double fi, double ka, double px, double py, double pz, double ksi_kp, double eta_kp)\n")
    f_cpp.write("{")
    f_cpp.write("delta.coeffRef(0,0) = %s;\n"%(ccode(obs_eq[0,0])))
    f_cpp.write("delta.coeffRef(1,0) = %s;\n"%(ccode(obs_eq[1,0])))
    f_cpp.write("}")
    f_cpp.write("\n")
    f_cpp.write("inline void observation_equation_metric_camera_colinearity_tait_bryan_wc_jacobian(Eigen::Matrix<double, 2, 9, Eigen::RowMajor> &j, double ksi_0, double eta_0, double c, double tx, double ty, double tz, double om, double fi, double ka, double px, double py, double pz, double ksi_kp, double eta_kp)\n")
    f_cpp.write("{")
    for i in range (2):
        for j in range (9):
            f_cpp.write("j.coeffRef(%d,%d) = %s;\n"%(i,j, ccode(obs_eq_jacobian[i,j])))
    f_cpp.write("}")






