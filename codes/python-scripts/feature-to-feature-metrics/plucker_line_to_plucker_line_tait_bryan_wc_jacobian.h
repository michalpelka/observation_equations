inline void plucker_line_to_plucker_line_tait_bryan_wc(Eigen::Matrix<double, 6, 1> &delta, double tx_1, double ty_1, double tz_1, double om_1, double fi_1, double ka_1, double tx_2, double ty_2, double tz_2, double om_2, double fi_2, double ka_2, double mx_1, double my_1, double mz_1, double lx_1, double ly_1, double lz_1, double mx_2, double my_2, double mz_2, double lx_2, double ly_2, double lz_2)
{delta.coeffRef(0,0) = -lx_1*(ty_1*(-sin(fi_1)*cos(ka_1)*cos(om_1) + sin(ka_1)*sin(om_1)) - tz_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1))) + lx_2*(ty_2*(-sin(fi_2)*cos(ka_2)*cos(om_2) + sin(ka_2)*sin(om_2)) - tz_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2))) - ly_1*(ty_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) - tz_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1))) + ly_2*(ty_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) - tz_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2))) - lz_1*(ty_1*cos(fi_1)*cos(om_1) + tz_1*sin(om_1)*cos(fi_1)) + lz_2*(ty_2*cos(fi_2)*cos(om_2) + tz_2*sin(om_2)*cos(fi_2)) - mx_1*cos(fi_1)*cos(ka_1) + mx_2*cos(fi_2)*cos(ka_2) + my_1*sin(ka_1)*cos(fi_1) - my_2*sin(ka_2)*cos(fi_2) - mz_1*sin(fi_1) + mz_2*sin(fi_2);
delta.coeffRef(1,0) = -lx_1*(-tx_1*(-sin(fi_1)*cos(ka_1)*cos(om_1) + sin(ka_1)*sin(om_1)) + tz_1*cos(fi_1)*cos(ka_1)) + lx_2*(-tx_2*(-sin(fi_2)*cos(ka_2)*cos(om_2) + sin(ka_2)*sin(om_2)) + tz_2*cos(fi_2)*cos(ka_2)) - ly_1*(-tx_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) - tz_1*sin(ka_1)*cos(fi_1)) + ly_2*(-tx_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) - tz_2*sin(ka_2)*cos(fi_2)) - lz_1*(-tx_1*cos(fi_1)*cos(om_1) + tz_1*sin(fi_1)) + lz_2*(-tx_2*cos(fi_2)*cos(om_2) + tz_2*sin(fi_2)) - mx_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1)) + mx_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2)) - my_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) + my_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) + mz_1*sin(om_1)*cos(fi_1) - mz_2*sin(om_2)*cos(fi_2);
delta.coeffRef(2,0) = -lx_1*(tx_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1)) - ty_1*cos(fi_1)*cos(ka_1)) + lx_2*(tx_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2)) - ty_2*cos(fi_2)*cos(ka_2)) - ly_1*(tx_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) + ty_1*sin(ka_1)*cos(fi_1)) + ly_2*(tx_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) + ty_2*sin(ka_2)*cos(fi_2)) - lz_1*(-tx_1*sin(om_1)*cos(fi_1) - ty_1*sin(fi_1)) + lz_2*(-tx_2*sin(om_2)*cos(fi_2) - ty_2*sin(fi_2)) - mx_1*(-sin(fi_1)*cos(ka_1)*cos(om_1) + sin(ka_1)*sin(om_1)) + mx_2*(-sin(fi_2)*cos(ka_2)*cos(om_2) + sin(ka_2)*sin(om_2)) - my_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) + my_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) - mz_1*cos(fi_1)*cos(om_1) + mz_2*cos(fi_2)*cos(om_2);
delta.coeffRef(3,0) = -lx_1*cos(fi_1)*cos(ka_1) + lx_2*cos(fi_2)*cos(ka_2) + ly_1*sin(ka_1)*cos(fi_1) - ly_2*sin(ka_2)*cos(fi_2) - lz_1*sin(fi_1) + lz_2*sin(fi_2);
delta.coeffRef(4,0) = -lx_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1)) + lx_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2)) - ly_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) + ly_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) + lz_1*sin(om_1)*cos(fi_1) - lz_2*sin(om_2)*cos(fi_2);
delta.coeffRef(5,0) = -lx_1*(-sin(fi_1)*cos(ka_1)*cos(om_1) + sin(ka_1)*sin(om_1)) + lx_2*(-sin(fi_2)*cos(ka_2)*cos(om_2) + sin(ka_2)*sin(om_2)) - ly_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) + ly_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) - lz_1*cos(fi_1)*cos(om_1) + lz_2*cos(fi_2)*cos(om_2);
}
inline void plucker_line_to_plucker_line_tait_bryan_wc_jacobian(Eigen::Matrix<double, 6, 12, Eigen::RowMajor> &j, double tx_1, double ty_1, double tz_1, double om_1, double fi_1, double ka_1, double tx_2, double ty_2, double tz_2, double om_2, double fi_2, double ka_2, double mx_1, double my_1, double mz_1, double lx_1, double ly_1, double lz_1, double mx_2, double my_2, double mz_2, double lx_2, double ly_2, double lz_2)
{j.coeffRef(0,0) = 0;
j.coeffRef(0,1) = -lx_1*(-sin(fi_1)*cos(ka_1)*cos(om_1) + sin(ka_1)*sin(om_1)) - ly_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) - lz_1*cos(fi_1)*cos(om_1);
j.coeffRef(0,2) = -lx_1*(-sin(fi_1)*sin(om_1)*cos(ka_1) - sin(ka_1)*cos(om_1)) - ly_1*(sin(fi_1)*sin(ka_1)*sin(om_1) - cos(ka_1)*cos(om_1)) - lz_1*sin(om_1)*cos(fi_1);
j.coeffRef(0,3) = -lx_1*(ty_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1)) - tz_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1))) - ly_1*(ty_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) - tz_1*(-sin(fi_1)*sin(ka_1)*cos(om_1) - sin(om_1)*cos(ka_1))) - lz_1*(-ty_1*sin(om_1)*cos(fi_1) + tz_1*cos(fi_1)*cos(om_1));
j.coeffRef(0,4) = -lx_1*(-ty_1*cos(fi_1)*cos(ka_1)*cos(om_1) - tz_1*sin(om_1)*cos(fi_1)*cos(ka_1)) - ly_1*(ty_1*sin(ka_1)*cos(fi_1)*cos(om_1) + tz_1*sin(ka_1)*sin(om_1)*cos(fi_1)) - lz_1*(-ty_1*sin(fi_1)*cos(om_1) - tz_1*sin(fi_1)*sin(om_1)) + mx_1*sin(fi_1)*cos(ka_1) - my_1*sin(fi_1)*sin(ka_1) - mz_1*cos(fi_1);
j.coeffRef(0,5) = -lx_1*(ty_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) - tz_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1))) - ly_1*(ty_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1)) - tz_1*(-sin(fi_1)*sin(om_1)*cos(ka_1) - sin(ka_1)*cos(om_1))) + mx_1*sin(ka_1)*cos(fi_1) + my_1*cos(fi_1)*cos(ka_1);
j.coeffRef(0,6) = 0;
j.coeffRef(0,7) = lx_2*(-sin(fi_2)*cos(ka_2)*cos(om_2) + sin(ka_2)*sin(om_2)) + ly_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) + lz_2*cos(fi_2)*cos(om_2);
j.coeffRef(0,8) = lx_2*(-sin(fi_2)*sin(om_2)*cos(ka_2) - sin(ka_2)*cos(om_2)) + ly_2*(sin(fi_2)*sin(ka_2)*sin(om_2) - cos(ka_2)*cos(om_2)) + lz_2*sin(om_2)*cos(fi_2);
j.coeffRef(0,9) = lx_2*(ty_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2)) - tz_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2))) + ly_2*(ty_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) - tz_2*(-sin(fi_2)*sin(ka_2)*cos(om_2) - sin(om_2)*cos(ka_2))) + lz_2*(-ty_2*sin(om_2)*cos(fi_2) + tz_2*cos(fi_2)*cos(om_2));
j.coeffRef(0,10) = lx_2*(-ty_2*cos(fi_2)*cos(ka_2)*cos(om_2) - tz_2*sin(om_2)*cos(fi_2)*cos(ka_2)) + ly_2*(ty_2*sin(ka_2)*cos(fi_2)*cos(om_2) + tz_2*sin(ka_2)*sin(om_2)*cos(fi_2)) + lz_2*(-ty_2*sin(fi_2)*cos(om_2) - tz_2*sin(fi_2)*sin(om_2)) - mx_2*sin(fi_2)*cos(ka_2) + my_2*sin(fi_2)*sin(ka_2) + mz_2*cos(fi_2);
j.coeffRef(0,11) = lx_2*(ty_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) - tz_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2))) + ly_2*(ty_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2)) - tz_2*(-sin(fi_2)*sin(om_2)*cos(ka_2) - sin(ka_2)*cos(om_2))) - mx_2*sin(ka_2)*cos(fi_2) - my_2*cos(fi_2)*cos(ka_2);
j.coeffRef(1,0) = -lx_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1)) - ly_1*(-sin(fi_1)*sin(ka_1)*cos(om_1) - sin(om_1)*cos(ka_1)) + lz_1*cos(fi_1)*cos(om_1);
j.coeffRef(1,1) = 0;
j.coeffRef(1,2) = -lx_1*cos(fi_1)*cos(ka_1) + ly_1*sin(ka_1)*cos(fi_1) - lz_1*sin(fi_1);
j.coeffRef(1,3) = lx_1*tx_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1)) + ly_1*tx_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) - lz_1*tx_1*sin(om_1)*cos(fi_1) - mx_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1)) - my_1*(-sin(fi_1)*sin(ka_1)*cos(om_1) - sin(om_1)*cos(ka_1)) + mz_1*cos(fi_1)*cos(om_1);
j.coeffRef(1,4) = -lx_1*(tx_1*cos(fi_1)*cos(ka_1)*cos(om_1) - tz_1*sin(fi_1)*cos(ka_1)) - ly_1*(-tx_1*sin(ka_1)*cos(fi_1)*cos(om_1) + tz_1*sin(fi_1)*sin(ka_1)) - lz_1*(tx_1*sin(fi_1)*cos(om_1) + tz_1*cos(fi_1)) - mx_1*sin(om_1)*cos(fi_1)*cos(ka_1) + my_1*sin(ka_1)*sin(om_1)*cos(fi_1) - mz_1*sin(fi_1)*sin(om_1);
j.coeffRef(1,5) = -lx_1*(-tx_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) - tz_1*sin(ka_1)*cos(fi_1)) - ly_1*(-tx_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1)) - tz_1*cos(fi_1)*cos(ka_1)) - mx_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) - my_1*(-sin(fi_1)*sin(om_1)*cos(ka_1) - sin(ka_1)*cos(om_1));
j.coeffRef(1,6) = lx_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2)) + ly_2*(-sin(fi_2)*sin(ka_2)*cos(om_2) - sin(om_2)*cos(ka_2)) - lz_2*cos(fi_2)*cos(om_2);
j.coeffRef(1,7) = 0;
j.coeffRef(1,8) = lx_2*cos(fi_2)*cos(ka_2) - ly_2*sin(ka_2)*cos(fi_2) + lz_2*sin(fi_2);
j.coeffRef(1,9) = -lx_2*tx_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2)) - ly_2*tx_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) + lz_2*tx_2*sin(om_2)*cos(fi_2) + mx_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2)) + my_2*(-sin(fi_2)*sin(ka_2)*cos(om_2) - sin(om_2)*cos(ka_2)) - mz_2*cos(fi_2)*cos(om_2);
j.coeffRef(1,10) = lx_2*(tx_2*cos(fi_2)*cos(ka_2)*cos(om_2) - tz_2*sin(fi_2)*cos(ka_2)) + ly_2*(-tx_2*sin(ka_2)*cos(fi_2)*cos(om_2) + tz_2*sin(fi_2)*sin(ka_2)) + lz_2*(tx_2*sin(fi_2)*cos(om_2) + tz_2*cos(fi_2)) + mx_2*sin(om_2)*cos(fi_2)*cos(ka_2) - my_2*sin(ka_2)*sin(om_2)*cos(fi_2) + mz_2*sin(fi_2)*sin(om_2);
j.coeffRef(1,11) = lx_2*(-tx_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) - tz_2*sin(ka_2)*cos(fi_2)) + ly_2*(-tx_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2)) - tz_2*cos(fi_2)*cos(ka_2)) + mx_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) + my_2*(-sin(fi_2)*sin(om_2)*cos(ka_2) - sin(ka_2)*cos(om_2));
j.coeffRef(2,0) = -lx_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1)) - ly_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) + lz_1*sin(om_1)*cos(fi_1);
j.coeffRef(2,1) = lx_1*cos(fi_1)*cos(ka_1) - ly_1*sin(ka_1)*cos(fi_1) + lz_1*sin(fi_1);
j.coeffRef(2,2) = 0;
j.coeffRef(2,3) = -lx_1*tx_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1)) - ly_1*tx_1*(-sin(fi_1)*sin(ka_1)*cos(om_1) - sin(om_1)*cos(ka_1)) + lz_1*tx_1*cos(fi_1)*cos(om_1) - mx_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1)) - my_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) + mz_1*sin(om_1)*cos(fi_1);
j.coeffRef(2,4) = -lx_1*(tx_1*sin(om_1)*cos(fi_1)*cos(ka_1) + ty_1*sin(fi_1)*cos(ka_1)) - ly_1*(-tx_1*sin(ka_1)*sin(om_1)*cos(fi_1) - ty_1*sin(fi_1)*sin(ka_1)) - lz_1*(tx_1*sin(fi_1)*sin(om_1) - ty_1*cos(fi_1)) + mx_1*cos(fi_1)*cos(ka_1)*cos(om_1) - my_1*sin(ka_1)*cos(fi_1)*cos(om_1) + mz_1*sin(fi_1)*cos(om_1);
j.coeffRef(2,5) = -lx_1*(tx_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) + ty_1*sin(ka_1)*cos(fi_1)) - ly_1*(tx_1*(-sin(fi_1)*sin(om_1)*cos(ka_1) - sin(ka_1)*cos(om_1)) + ty_1*cos(fi_1)*cos(ka_1)) - mx_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) - my_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1));
j.coeffRef(2,6) = lx_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2)) + ly_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) - lz_2*sin(om_2)*cos(fi_2);
j.coeffRef(2,7) = -lx_2*cos(fi_2)*cos(ka_2) + ly_2*sin(ka_2)*cos(fi_2) - lz_2*sin(fi_2);
j.coeffRef(2,8) = 0;
j.coeffRef(2,9) = lx_2*tx_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2)) + ly_2*tx_2*(-sin(fi_2)*sin(ka_2)*cos(om_2) - sin(om_2)*cos(ka_2)) - lz_2*tx_2*cos(fi_2)*cos(om_2) + mx_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2)) + my_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) - mz_2*sin(om_2)*cos(fi_2);
j.coeffRef(2,10) = lx_2*(tx_2*sin(om_2)*cos(fi_2)*cos(ka_2) + ty_2*sin(fi_2)*cos(ka_2)) + ly_2*(-tx_2*sin(ka_2)*sin(om_2)*cos(fi_2) - ty_2*sin(fi_2)*sin(ka_2)) + lz_2*(tx_2*sin(fi_2)*sin(om_2) - ty_2*cos(fi_2)) - mx_2*cos(fi_2)*cos(ka_2)*cos(om_2) + my_2*sin(ka_2)*cos(fi_2)*cos(om_2) - mz_2*sin(fi_2)*cos(om_2);
j.coeffRef(2,11) = lx_2*(tx_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) + ty_2*sin(ka_2)*cos(fi_2)) + ly_2*(tx_2*(-sin(fi_2)*sin(om_2)*cos(ka_2) - sin(ka_2)*cos(om_2)) + ty_2*cos(fi_2)*cos(ka_2)) + mx_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) + my_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2));
j.coeffRef(3,0) = 0;
j.coeffRef(3,1) = 0;
j.coeffRef(3,2) = 0;
j.coeffRef(3,3) = 0;
j.coeffRef(3,4) = lx_1*sin(fi_1)*cos(ka_1) - ly_1*sin(fi_1)*sin(ka_1) - lz_1*cos(fi_1);
j.coeffRef(3,5) = lx_1*sin(ka_1)*cos(fi_1) + ly_1*cos(fi_1)*cos(ka_1);
j.coeffRef(3,6) = 0;
j.coeffRef(3,7) = 0;
j.coeffRef(3,8) = 0;
j.coeffRef(3,9) = 0;
j.coeffRef(3,10) = -lx_2*sin(fi_2)*cos(ka_2) + ly_2*sin(fi_2)*sin(ka_2) + lz_2*cos(fi_2);
j.coeffRef(3,11) = -lx_2*sin(ka_2)*cos(fi_2) - ly_2*cos(fi_2)*cos(ka_2);
j.coeffRef(4,0) = 0;
j.coeffRef(4,1) = 0;
j.coeffRef(4,2) = 0;
j.coeffRef(4,3) = -lx_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1)) - ly_1*(-sin(fi_1)*sin(ka_1)*cos(om_1) - sin(om_1)*cos(ka_1)) + lz_1*cos(fi_1)*cos(om_1);
j.coeffRef(4,4) = -lx_1*sin(om_1)*cos(fi_1)*cos(ka_1) + ly_1*sin(ka_1)*sin(om_1)*cos(fi_1) - lz_1*sin(fi_1)*sin(om_1);
j.coeffRef(4,5) = -lx_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) - ly_1*(-sin(fi_1)*sin(om_1)*cos(ka_1) - sin(ka_1)*cos(om_1));
j.coeffRef(4,6) = 0;
j.coeffRef(4,7) = 0;
j.coeffRef(4,8) = 0;
j.coeffRef(4,9) = lx_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2)) + ly_2*(-sin(fi_2)*sin(ka_2)*cos(om_2) - sin(om_2)*cos(ka_2)) - lz_2*cos(fi_2)*cos(om_2);
j.coeffRef(4,10) = lx_2*sin(om_2)*cos(fi_2)*cos(ka_2) - ly_2*sin(ka_2)*sin(om_2)*cos(fi_2) + lz_2*sin(fi_2)*sin(om_2);
j.coeffRef(4,11) = lx_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) + ly_2*(-sin(fi_2)*sin(om_2)*cos(ka_2) - sin(ka_2)*cos(om_2));
j.coeffRef(5,0) = 0;
j.coeffRef(5,1) = 0;
j.coeffRef(5,2) = 0;
j.coeffRef(5,3) = -lx_1*(sin(fi_1)*sin(om_1)*cos(ka_1) + sin(ka_1)*cos(om_1)) - ly_1*(-sin(fi_1)*sin(ka_1)*sin(om_1) + cos(ka_1)*cos(om_1)) + lz_1*sin(om_1)*cos(fi_1);
j.coeffRef(5,4) = lx_1*cos(fi_1)*cos(ka_1)*cos(om_1) - ly_1*sin(ka_1)*cos(fi_1)*cos(om_1) + lz_1*sin(fi_1)*cos(om_1);
j.coeffRef(5,5) = -lx_1*(sin(fi_1)*sin(ka_1)*cos(om_1) + sin(om_1)*cos(ka_1)) - ly_1*(sin(fi_1)*cos(ka_1)*cos(om_1) - sin(ka_1)*sin(om_1));
j.coeffRef(5,6) = 0;
j.coeffRef(5,7) = 0;
j.coeffRef(5,8) = 0;
j.coeffRef(5,9) = lx_2*(sin(fi_2)*sin(om_2)*cos(ka_2) + sin(ka_2)*cos(om_2)) + ly_2*(-sin(fi_2)*sin(ka_2)*sin(om_2) + cos(ka_2)*cos(om_2)) - lz_2*sin(om_2)*cos(fi_2);
j.coeffRef(5,10) = -lx_2*cos(fi_2)*cos(ka_2)*cos(om_2) + ly_2*sin(ka_2)*cos(fi_2)*cos(om_2) - lz_2*sin(fi_2)*cos(om_2);
j.coeffRef(5,11) = lx_2*(sin(fi_2)*sin(ka_2)*cos(om_2) + sin(om_2)*cos(ka_2)) + ly_2*(sin(fi_2)*cos(ka_2)*cos(om_2) - sin(ka_2)*sin(om_2));
}