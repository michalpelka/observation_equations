from sympy import *
from tait_bryan_R_utils import *
from rodrigues_R_utils import *
from quaternion_R_utils import *
from plucker_line_utils import *

mx_1, my_1, mz_1, lx_1, ly_1, lz_1  = symbols('mx_1 my_1 mz_1 lx_1 ly_1 lz_1')
px_1, py_1, pz_1 = symbols('px_1 py_1 pz_1')
om_1, fi_1, ka_1 = symbols('om_1 fi_1 ka_1')
#sx_1, sy_1, sz_1 = symbols('sx_1 sy_1 sz_1')
#q0_1, q1_1, q2_1, q3_1 = symbols('q0_1 q1_1 q2_1 q3_1')
mx_2, my_2, mz_2, lx_2, ly_2, lz_2  = symbols('mx_2 my_2 mz_2 lx_2 ly_2 lz_2')
px_2, py_2, pz_2 = symbols('px_2 py_2 pz_2')
om_2, fi_2, ka_2 = symbols('om_2 fi_2 ka_2')
#sx_2, sy_2, sz_2 = symbols('sx_2 sy_2 sz_2')
#q0_2, q1_2, q2_2, q3_2 = symbols('q0_2 q1_2 q2_2 q3_2')

position_symbols_1 = [px_1, py_1, pz_1]
orientation_symbols_1 = [om_1, fi_1, ka_1]
#orientation_symbols_1 = [sx_1, sy_1, sz_1]
#orientation_symbols_1 = [q0_1, q1_1, q2_1, q3_1]
position_symbols_2 = [px_2, py_2, pz_2]
orientation_symbols_2 = [om_2, fi_2, ka_2]
#orientation_symbols_2 = [sx_2, sy_2, sz_2]
#orientation_symbols_2 = [q0_2, q1_2, q2_2, q3_2]
all_symbols = position_symbols_1 + orientation_symbols_1 + position_symbols_2 + orientation_symbols_2

RT_wc_1 = matrix44FromTaitBryan(px_1, py_1, pz_1, om_1, fi_1, ka_1)
#RT_wc_1 = matrix44FromRodrigues(px_1, py_1, pz_1, sx_1, sy_1, sz_1)
#RT_wc_1 = matrix44FromQuaternion(px_1, py_1, pz_1, q0_1, q1_1, q2_1, q3_1)
RT_wc_2 = matrix44FromTaitBryan(px_2, py_2, pz_2, om_2, fi_2, ka_2)
#RT_wc_2 = matrix44FromRodrigues(px_2, py_2, pz_2, sx_2, sy_2, sz_2)
#RT_wc_2 = matrix44FromQuaternion(px_2, py_2, pz_2, q0_2, q1_2, q2_2, q3_2)
plucker_line_motion_matrix_1=plucker_line_motion_matrix_wc(RT_wc_1)
plucker_line_motion_matrix_2=plucker_line_motion_matrix_wc(RT_wc_2)

plucker_line_local_1 = Matrix([mx_1, my_1, mz_1, lx_1, ly_1, lz_1]).vec()
plucker_line_local_2 = Matrix([mx_2, my_2, mz_2, lx_2, ly_2, lz_2]).vec()

plucker_line_global_1 = plucker_line_motion_matrix_1 * plucker_line_local_1
plucker_line_global_2 = plucker_line_motion_matrix_2 * plucker_line_local_2

target_value = Matrix([0,0,0,0,0,0]).vec()
model_function = plucker_line_global_1 - plucker_line_global_2
delta = target_value - model_function
delta_jacobian=delta.jacobian(all_symbols)

print(delta)
print(delta_jacobian)

with open("plucker_line_to_plucker_line_tait_bryan_wc_jacobian.h",'w') as f_cpp:  
    f_cpp.write("inline void plucker_line_to_plucker_line_tait_bryan_wc(Eigen::Matrix<double, 6, 1> &delta, double px_1, double py_1, double pz_1, double om_1, double fi_1, double ka_1, double px_2, double py_2, double pz_2, double om_2, double fi_2, double ka_2, double mx_1, double my_1, double mz_1, double lx_1, double ly_1, double lz_1, double mx_2, double my_2, double mz_2, double lx_2, double ly_2, double lz_2)\n")
    f_cpp.write("{")
    for i in range (6):
        f_cpp.write("delta.coeffRef(%d,%d) = %s;\n"%(i, 0, ccode(delta[i])))
    f_cpp.write("}")
    f_cpp.write("\n")
    f_cpp.write("inline void plucker_line_to_plucker_line_tait_bryan_wc_jacobian(Eigen::Matrix<double, 6, 12, Eigen::RowMajor> &j, double px_1, double py_1, double pz_1, double om_1, double fi_1, double ka_1, double px_2, double py_2, double pz_2, double om_2, double fi_2, double ka_2, double mx_1, double my_1, double mz_1, double lx_1, double ly_1, double lz_1, double mx_2, double my_2, double mz_2, double lx_2, double ly_2, double lz_2)\n")
    f_cpp.write("{")
    for i in range (6):
        for j in range (12):
            f_cpp.write("j.coeffRef(%d,%d) = %s;\n"%(i,j, ccode(delta_jacobian[i,j])))
    f_cpp.write("}")



