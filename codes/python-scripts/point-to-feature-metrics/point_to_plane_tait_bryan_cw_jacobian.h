#ifndef _point_to_plane_tait_bryan_cw_jacobian_h_
#define _point_to_plane_tait_bryan_cw_jacobian_h_
inline void point_to_plane_tait_bryan_cw(Eigen::Matrix<double, 1, 1> &delta, double tx, double ty, double tz, double om, double fi, double ka, double xsl, double ysl, double zsl, double xtg, double ytg, double ztg, double vzx, double vzy, double vzz)
{delta.coeffRef(0,0) = -vzx*(-tx*cos(fi)*cos(ka) + ty*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + tz*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + xsl*cos(fi)*cos(ka) - xtg + ysl*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om)) + zsl*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om))) - vzy*(tx*sin(ka)*cos(fi) + ty*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om)) + tz*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) - xsl*sin(ka)*cos(fi) + ysl*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) - ytg + zsl*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka))) - vzz*(-tx*sin(fi) + ty*sin(om)*cos(fi) - tz*cos(fi)*cos(om) + xsl*sin(fi) - ysl*sin(om)*cos(fi) + zsl*cos(fi)*cos(om) - ztg);
}
inline void point_to_plane_tait_bryan_cw_jacobian(Eigen::Matrix<double, 1, 6> &j, double tx, double ty, double tz, double om, double fi, double ka, double xsl, double ysl, double zsl, double xtg, double ytg, double ztg, double vzx, double vzy, double vzz)
{j.coeffRef(0,0) = vzx*cos(fi)*cos(ka) - vzy*sin(ka)*cos(fi) + vzz*sin(fi);
j.coeffRef(0,1) = -vzx*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) - vzy*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om)) - vzz*sin(om)*cos(fi);
j.coeffRef(0,2) = -vzx*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) - vzy*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) + vzz*cos(fi)*cos(om);
j.coeffRef(0,3) = -vzx*(ty*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om)) + tz*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + ysl*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)) + zsl*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om))) - vzy*(ty*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka)) + tz*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om)) + ysl*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) + zsl*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om))) - vzz*(ty*cos(fi)*cos(om) + tz*sin(om)*cos(fi) - ysl*cos(fi)*cos(om) - zsl*sin(om)*cos(fi));
j.coeffRef(0,4) = -vzx*(tx*sin(fi)*cos(ka) - ty*sin(om)*cos(fi)*cos(ka) + tz*cos(fi)*cos(ka)*cos(om) - xsl*sin(fi)*cos(ka) + ysl*sin(om)*cos(fi)*cos(ka) - zsl*cos(fi)*cos(ka)*cos(om)) - vzy*(-tx*sin(fi)*sin(ka) + ty*sin(ka)*sin(om)*cos(fi) - tz*sin(ka)*cos(fi)*cos(om) + xsl*sin(fi)*sin(ka) - ysl*sin(ka)*sin(om)*cos(fi) + zsl*sin(ka)*cos(fi)*cos(om)) - vzz*(-tx*cos(fi) - ty*sin(fi)*sin(om) + tz*sin(fi)*cos(om) + xsl*cos(fi) + ysl*sin(fi)*sin(om) - zsl*sin(fi)*cos(om));
j.coeffRef(0,5) = -vzx*(tx*sin(ka)*cos(fi) + ty*(sin(fi)*sin(ka)*sin(om) - cos(ka)*cos(om)) + tz*(-sin(fi)*sin(ka)*cos(om) - sin(om)*cos(ka)) - xsl*sin(ka)*cos(fi) + ysl*(-sin(fi)*sin(ka)*sin(om) + cos(ka)*cos(om)) + zsl*(sin(fi)*sin(ka)*cos(om) + sin(om)*cos(ka))) - vzy*(tx*cos(fi)*cos(ka) + ty*(sin(fi)*sin(om)*cos(ka) + sin(ka)*cos(om)) + tz*(-sin(fi)*cos(ka)*cos(om) + sin(ka)*sin(om)) - xsl*cos(fi)*cos(ka) + ysl*(-sin(fi)*sin(om)*cos(ka) - sin(ka)*cos(om)) + zsl*(sin(fi)*cos(ka)*cos(om) - sin(ka)*sin(om)));
}#endif