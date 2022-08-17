inline void point_to_projection_onto_plane_tait_bryan_wc(Eigen::Matrix<double, 3, 1> &delta, double tx, double ty, double tz, double om, double fi, double ka, double x_src_l, double y_src_l, double z_src_l, double x_trg_g, double y_trg_g, double z_trg_g, double a, double b, double c)
{delta.coeffRef(0,0) = -a*(-a*x_trg_g + a*(tx + x_src_l*cos(fi)*cos(ka) - y_src_l*sin(ka)*cos(fi) + z_src_l*sin(fi)) - b*y_trg_g + b*(ty + x_src_l*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) - z_src_l*sin(om)*cos(fi)) - c*z_trg_g + c*(tz + x_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om)) + y_src_l*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka)) + z_src_l*cos(fi)*cos(om)));
delta.coeffRef(1,0) = -b*(-a*x_trg_g + a*(tx + x_src_l*cos(fi)*cos(ka) - y_src_l*sin(ka)*cos(fi) + z_src_l*sin(fi)) - b*y_trg_g + b*(ty + x_src_l*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) - z_src_l*sin(om)*cos(fi)) - c*z_trg_g + c*(tz + x_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om)) + y_src_l*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka)) + z_src_l*cos(fi)*cos(om)));
delta.coeffRef(2,0) = -c*(-a*x_trg_g + a*(tx + x_src_l*cos(fi)*cos(ka) - y_src_l*sin(ka)*cos(fi) + z_src_l*sin(fi)) - b*y_trg_g + b*(ty + x_src_l*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) - z_src_l*sin(om)*cos(fi)) - c*z_trg_g + c*(tz + x_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om)) + y_src_l*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka)) + z_src_l*cos(fi)*cos(om)));
}
inline void point_to_projection_onto_plane_tait_bryan_wc_jacobian(Eigen::Matrix<double, 3, 6> &j, double tx, double ty, double tz, double om, double fi, double ka, double x_src_l, double y_src_l, double z_src_l, double x_trg_g, double y_trg_g, double z_trg_g, double a, double b, double c)
{j.coeffRef(0,0) = -pow(a, 2);
j.coeffRef(0,1) = -a*b;
j.coeffRef(0,2) = -a*c;
j.coeffRef(0,3) = -a*(b*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) - z_src_l*cos(fi)*cos(om)) + c*(x_src_l*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) - z_src_l*sin(om)*cos(fi)));
j.coeffRef(0,4) = -a*(a*(-x_src_l*sin(fi)*cos(ka) + y_src_l*sin(fi)*sin(ka) + z_src_l*cos(fi)) + b*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om)) + c*(-x_src_l*cos(fi)*cos(ka)*cos(om) + y_src_l*sin(ka)*cos(fi)*cos(om) - z_src_l*sin(fi)*cos(om)));
j.coeffRef(0,5) = -a*(a*(-x_src_l*sin(ka)*cos(fi) - y_src_l*cos(fi)*cos(ka)) + b*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om))) + c*(x_src_l*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka)) + y_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om))));
j.coeffRef(1,0) = -a*b;
j.coeffRef(1,1) = -pow(b, 2);
j.coeffRef(1,2) = -b*c;
j.coeffRef(1,3) = -b*(b*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) - z_src_l*cos(fi)*cos(om)) + c*(x_src_l*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) - z_src_l*sin(om)*cos(fi)));
j.coeffRef(1,4) = -b*(a*(-x_src_l*sin(fi)*cos(ka) + y_src_l*sin(fi)*sin(ka) + z_src_l*cos(fi)) + b*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om)) + c*(-x_src_l*cos(fi)*cos(ka)*cos(om) + y_src_l*sin(ka)*cos(fi)*cos(om) - z_src_l*sin(fi)*cos(om)));
j.coeffRef(1,5) = -b*(a*(-x_src_l*sin(ka)*cos(fi) - y_src_l*cos(fi)*cos(ka)) + b*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om))) + c*(x_src_l*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka)) + y_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om))));
j.coeffRef(2,0) = -a*c;
j.coeffRef(2,1) = -b*c;
j.coeffRef(2,2) = -pow(c, 2);
j.coeffRef(2,3) = -c*(b*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) - z_src_l*cos(fi)*cos(om)) + c*(x_src_l*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) - z_src_l*sin(om)*cos(fi)));
j.coeffRef(2,4) = -c*(a*(-x_src_l*sin(fi)*cos(ka) + y_src_l*sin(fi)*sin(ka) + z_src_l*cos(fi)) + b*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om)) + c*(-x_src_l*cos(fi)*cos(ka)*cos(om) + y_src_l*sin(ka)*cos(fi)*cos(om) - z_src_l*sin(fi)*cos(om)));
j.coeffRef(2,5) = -c*(a*(-x_src_l*sin(ka)*cos(fi) - y_src_l*cos(fi)*cos(ka)) + b*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om))) + c*(x_src_l*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka)) + y_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om))));
}inline void point_to_projection_onto_plane_tait_bryan_wc_hessian(Eigen::Matrix<double, 6, 6> &h, double tx, double ty, double tz, double om, double fi, double ka, double x_src_l, double y_src_l, double z_src_l, double x_trg_g, double y_trg_g, double z_trg_g, double a, double b, double c)
{h.coeffRef(0,0) = 0;
h.coeffRef(0,1) = 0;
h.coeffRef(0,2) = 0;
h.coeffRef(0,3) = 0;
h.coeffRef(0,4) = 0;
h.coeffRef(0,5) = 0;
h.coeffRef(1,0) = 0;
h.coeffRef(1,1) = 0;
h.coeffRef(1,2) = 0;
h.coeffRef(1,3) = 0;
h.coeffRef(1,4) = 0;
h.coeffRef(1,5) = 0;
h.coeffRef(2,0) = 0;
h.coeffRef(2,1) = 0;
h.coeffRef(2,2) = 0;
h.coeffRef(2,3) = 0;
h.coeffRef(2,4) = 0;
h.coeffRef(2,5) = 0;
h.coeffRef(3,0) = 0;
h.coeffRef(3,1) = 0;
h.coeffRef(3,2) = 0;
h.coeffRef(3,3) = -a*(b*(x_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + y_src_l*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om)) + z_src_l*sin(om)*cos(fi)) + c*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) - z_src_l*cos(fi)*cos(om))) - b*(b*(x_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + y_src_l*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om)) + z_src_l*sin(om)*cos(fi)) + c*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) - z_src_l*cos(fi)*cos(om))) - c*(b*(x_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + y_src_l*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om)) + z_src_l*sin(om)*cos(fi)) + c*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) - z_src_l*cos(fi)*cos(om)));
h.coeffRef(3,4) = -a*(b*(x_src_l*cos(fi)*cos(ka)*cos(om) - y_src_l*sin(ka)*cos(fi)*cos(om) + z_src_l*sin(fi)*cos(om)) + c*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om))) - b*(b*(x_src_l*cos(fi)*cos(ka)*cos(om) - y_src_l*sin(ka)*cos(fi)*cos(om) + z_src_l*sin(fi)*cos(om)) + c*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om))) - c*(b*(x_src_l*cos(fi)*cos(ka)*cos(om) - y_src_l*sin(ka)*cos(fi)*cos(om) + z_src_l*sin(fi)*cos(om)) + c*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om)));
h.coeffRef(3,5) = -a*(b*(x_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) + y_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om))) + c*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)))) - b*(b*(x_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) + y_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om))) + c*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)))) - c*(b*(x_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) + y_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om))) + c*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om))));
h.coeffRef(4,0) = 0;
h.coeffRef(4,1) = 0;
h.coeffRef(4,2) = 0;
h.coeffRef(4,3) = -a*(b*(x_src_l*cos(fi)*cos(ka)*cos(om) - y_src_l*sin(ka)*cos(fi)*cos(om) + z_src_l*sin(fi)*cos(om)) + c*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om))) - b*(b*(x_src_l*cos(fi)*cos(ka)*cos(om) - y_src_l*sin(ka)*cos(fi)*cos(om) + z_src_l*sin(fi)*cos(om)) + c*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om))) - c*(b*(x_src_l*cos(fi)*cos(ka)*cos(om) - y_src_l*sin(ka)*cos(fi)*cos(om) + z_src_l*sin(fi)*cos(om)) + c*(x_src_l*sin(om)*cos(fi)*cos(ka) - y_src_l*sin(ka)*sin(om)*cos(fi) + z_src_l*sin(fi)*sin(om)));
h.coeffRef(4,4) = -a*(a*(-x_src_l*cos(fi)*cos(ka) + y_src_l*sin(ka)*cos(fi) - z_src_l*sin(fi)) + b*(-x_src_l*sin(fi)*sin(om)*cos(ka) + y_src_l*sin(fi)*sin(ka)*sin(om) + z_src_l*sin(om)*cos(fi)) + c*(x_src_l*sin(fi)*cos(ka)*cos(om) - y_src_l*sin(fi)*sin(ka)*cos(om) - z_src_l*cos(fi)*cos(om))) - b*(a*(-x_src_l*cos(fi)*cos(ka) + y_src_l*sin(ka)*cos(fi) - z_src_l*sin(fi)) + b*(-x_src_l*sin(fi)*sin(om)*cos(ka) + y_src_l*sin(fi)*sin(ka)*sin(om) + z_src_l*sin(om)*cos(fi)) + c*(x_src_l*sin(fi)*cos(ka)*cos(om) - y_src_l*sin(fi)*sin(ka)*cos(om) - z_src_l*cos(fi)*cos(om))) - c*(a*(-x_src_l*cos(fi)*cos(ka) + y_src_l*sin(ka)*cos(fi) - z_src_l*sin(fi)) + b*(-x_src_l*sin(fi)*sin(om)*cos(ka) + y_src_l*sin(fi)*sin(ka)*sin(om) + z_src_l*sin(om)*cos(fi)) + c*(x_src_l*sin(fi)*cos(ka)*cos(om) - y_src_l*sin(fi)*sin(ka)*cos(om) - z_src_l*cos(fi)*cos(om)));
h.coeffRef(4,5) = -a*(a*(x_src_l*sin(fi)*sin(ka) + y_src_l*sin(fi)*cos(ka)) + b*(-x_src_l*sin(ka)*sin(om)*cos(fi) - y_src_l*sin(om)*cos(fi)*cos(ka)) + c*(x_src_l*sin(ka)*cos(fi)*cos(om) + y_src_l*cos(fi)*cos(ka)*cos(om))) - b*(a*(x_src_l*sin(fi)*sin(ka) + y_src_l*sin(fi)*cos(ka)) + b*(-x_src_l*sin(ka)*sin(om)*cos(fi) - y_src_l*sin(om)*cos(fi)*cos(ka)) + c*(x_src_l*sin(ka)*cos(fi)*cos(om) + y_src_l*cos(fi)*cos(ka)*cos(om))) - c*(a*(x_src_l*sin(fi)*sin(ka) + y_src_l*sin(fi)*cos(ka)) + b*(-x_src_l*sin(ka)*sin(om)*cos(fi) - y_src_l*sin(om)*cos(fi)*cos(ka)) + c*(x_src_l*sin(ka)*cos(fi)*cos(om) + y_src_l*cos(fi)*cos(ka)*cos(om)));
h.coeffRef(5,0) = 0;
h.coeffRef(5,1) = 0;
h.coeffRef(5,2) = 0;
h.coeffRef(5,3) = -a*(b*(x_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) + y_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om))) + c*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)))) - b*(b*(x_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) + y_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om))) + c*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)))) - c*(b*(x_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) + y_src_l*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om))) + c*(x_src_l*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + y_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om))));
h.coeffRef(5,4) = -a*(a*(x_src_l*sin(fi)*sin(ka) + y_src_l*sin(fi)*cos(ka)) + b*(-x_src_l*sin(ka)*sin(om)*cos(fi) - y_src_l*sin(om)*cos(fi)*cos(ka)) + c*(x_src_l*sin(ka)*cos(fi)*cos(om) + y_src_l*cos(fi)*cos(ka)*cos(om))) - b*(a*(x_src_l*sin(fi)*sin(ka) + y_src_l*sin(fi)*cos(ka)) + b*(-x_src_l*sin(ka)*sin(om)*cos(fi) - y_src_l*sin(om)*cos(fi)*cos(ka)) + c*(x_src_l*sin(ka)*cos(fi)*cos(om) + y_src_l*cos(fi)*cos(ka)*cos(om))) - c*(a*(x_src_l*sin(fi)*sin(ka) + y_src_l*sin(fi)*cos(ka)) + b*(-x_src_l*sin(ka)*sin(om)*cos(fi) - y_src_l*sin(om)*cos(fi)*cos(ka)) + c*(x_src_l*sin(ka)*cos(fi)*cos(om) + y_src_l*cos(fi)*cos(ka)*cos(om)));
h.coeffRef(5,5) = -a*(a*(-x_src_l*cos(fi)*cos(ka) + y_src_l*sin(ka)*cos(fi)) + b*(x_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + y_src_l*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om))) + c*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)))) - b*(a*(-x_src_l*cos(fi)*cos(ka) + y_src_l*sin(ka)*cos(fi)) + b*(x_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + y_src_l*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om))) + c*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)))) - c*(a*(-x_src_l*cos(fi)*cos(ka) + y_src_l*sin(ka)*cos(fi)) + b*(x_src_l*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + y_src_l*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om))) + c*(x_src_l*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + y_src_l*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka))));
}