inline void point_to_point_source_to_target_rodrigues_wc(double &delta_x, double &delta_y, double &delta_z, double px, double py, double pz, double sx, double sy, double sz, double x_s, double y_s, double z_s, double x_t, double y_t, double z_t)
{delta_x = -px - x_s*(pow(sx, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))) + x_t - y_s*(sx*sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(sx*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
delta_y = -py - x_s*(sx*sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(pow(sy, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))) + y_t - z_s*(-sx*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sy*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
delta_z = -pz - x_s*(sx*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(sx*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sy*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(pow(sz, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))) + z_t;
}
inline void point_to_point_source_to_target_rodrigues_wc_jacobian(Eigen::Matrix<double, 3, 6, Eigen::RowMajor> &j, double px, double py, double pz, double sx, double sy, double sz, double x_s, double y_s, double z_s)
{j.coeffRef(0,0) = -1;
j.coeffRef(0,1) = 0;
j.coeffRef(0,2) = 0;
j.coeffRef(0,3) = -x_s*(-2*pow(sx, 3)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sx, 3)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + 2*sx*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sx*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(-2*pow(sx, 2)*sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sx, 2)*sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sx*sz*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sx*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(-2*pow(sx, 2)*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sx, 2)*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sx*sy*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sx*sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
j.coeffRef(0,4) = -x_s*(-2*pow(sx, 2)*sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sx, 2)*sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(-2*sx*pow(sy, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*pow(sy, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sx*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sy*sz*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0)) - z_s*(-2*sx*sy*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + pow(sy, 2)*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - pow(sy, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
j.coeffRef(0,5) = -x_s*(-2*pow(sx, 2)*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sx, 2)*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(-2*sx*sy*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - pow(sz, 2)*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + pow(sz, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(-2*sx*pow(sz, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*pow(sz, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sx*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sy*sz*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0));
j.coeffRef(1,0) = 0;
j.coeffRef(1,1) = -1;
j.coeffRef(1,2) = 0;
j.coeffRef(1,3) = -x_s*(-2*pow(sx, 2)*sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sx, 2)*sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sx*sz*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sx*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(-2*sx*pow(sy, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*pow(sy, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sx*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(-pow(sx, 2)*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + pow(sx, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - 2*sx*sy*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
j.coeffRef(1,4) = -x_s*(-2*sx*pow(sy, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*pow(sy, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sx*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sy*sz*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0)) - y_s*(-2*pow(sy, 3)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sy, 3)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + 2*sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(-sx*sy*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sx*sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - 2*pow(sy, 2)*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sy, 2)*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
j.coeffRef(1,5) = -x_s*(-2*sx*sy*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + pow(sz, 2)*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - pow(sz, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(-2*pow(sy, 2)*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sy, 2)*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(-sx*sz*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sx*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - 2*sy*pow(sz, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sy*pow(sz, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
j.coeffRef(2,0) = 0;
j.coeffRef(2,1) = 0;
j.coeffRef(2,2) = -1;
j.coeffRef(2,3) = -x_s*(-2*pow(sx, 2)*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sx, 2)*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sx*sy*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sx*sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(pow(sx, 2)*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - pow(sx, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - 2*sx*sy*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(-2*sx*pow(sz, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*pow(sz, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sx*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
j.coeffRef(2,4) = -x_s*(-2*sx*sy*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - pow(sy, 2)*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + pow(sy, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - y_s*(sx*sy*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sx*sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - 2*pow(sy, 2)*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sy, 2)*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(-2*sy*pow(sz, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sy*pow(sz, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - sy*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
j.coeffRef(2,5) = -x_s*(-2*sx*pow(sz, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sx*pow(sz, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sx*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sy*sz*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) + sy*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0)) - y_s*(sx*sz*cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sx*sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) - 2*sy*pow(sz, 2)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + sy*pow(sz, 2)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + sy*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))) - z_s*(-2*pow(sz, 3)*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 2) + pow(sz, 3)*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/pow(pow(sx, 2) + pow(sy, 2) + pow(sz, 2), 3.0/2.0) + 2*sz*(1.0 - cos(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2))))/(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)) - sz*sin(sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)))/sqrt(pow(sx, 2) + pow(sy, 2) + pow(sz, 2)));
}