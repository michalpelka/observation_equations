cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(slam-book-examples)

set(CMAKE_CXX_STANDARD 11)
set(PROJECT_VERSION 1.0.0)

find_package(OpenGL REQUIRED)
if(OpenGL_FOUND)
	message("OpenGL found")
	message ("OPENGL_LIBRARIES: " ${OPENGL_LIBRARIES})
endif()

find_package(GLUT REQUIRED)
if(GLUT_FOUND)
	message("GLUT found")
	message ("GLUT_glut_LIBRARY: " ${GLUT_glut_LIBRARY})
endif()

find_package( Eigen3 REQUIRED)
if(EIGEN3_FOUND)
	message("EIGEN3 found")
	message ("EIGEN3_INCLUDE_DIR: " ${EIGEN3_INCLUDE_DIR})
	message ("EIGEN3_INCLUDE_DIRS: " ${EIGEN3_INCLUDE_DIRS})
	message ("Eigen3_DIR: " ${Eigen3_DIR})
endif()

find_package( OpenCV REQUIRED )

include_directories(
	${EIGEN3_INCLUDE_DIR} 
	${EIGEN3_INCLUDE_DIRS} 
	${Eigen3_DIR}
	${OpenCV_INCLUDE_DIRS}
)

add_executable(perspective_camera_ba
	src/perspective_camera_ba.cpp
)

target_link_libraries(perspective_camera_ba
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(metric_camera_colinearity_ba
	src/metric_camera_colinearity_ba.cpp
)

target_link_libraries(metric_camera_colinearity_ba
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(metric_camera_coplanarity_ba
	src/metric_camera_coplanarity_ba.cpp
)

target_link_libraries(metric_camera_coplanarity_ba
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(equirectangular_camera_colinearity_ba
	src/equirectangular_camera_colinearity_ba.cpp
)

target_link_libraries(equirectangular_camera_colinearity_ba
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(equirectangular_camera_coplanarity_ba
	src/equirectangular_camera_coplanarity_ba.cpp
)

target_link_libraries(equirectangular_camera_coplanarity_ba
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(point_to_point
	src/point_to_point.cpp
)

target_link_libraries(point_to_point
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(point_to_point_with_scale
	src/point_to_point_with_scale.cpp
)

target_link_libraries(point_to_point_with_scale
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(perspective_camera_external_orientation_plucker_line
	src/perspective_camera_external_orientation_plucker_line.cpp
)

target_link_libraries(perspective_camera_external_orientation_plucker_line
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(point_to_point_source_to_target
	src/point_to_point_source_to_target.cpp
)

target_link_libraries(point_to_point_source_to_target
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(plucker_line_to_plucker_line
	src/plucker_line_to_plucker_line.cpp
)

target_link_libraries(plucker_line_to_plucker_line
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(plane_to_plane
	src/plane_to_plane.cpp
)

target_link_libraries(plane_to_plane
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(point_to_line
	src/point_to_line.cpp
)

target_link_libraries(point_to_line
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(point_to_plane
	src/point_to_plane.cpp
)

target_link_libraries(point_to_plane
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(point_to_projection_onto_line
	src/point_to_projection_onto_line.cpp
)

target_link_libraries(point_to_projection_onto_line
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(point_to_projection_onto_plane
	src/point_to_projection_onto_plane.cpp
)

target_link_libraries(point_to_projection_onto_plane
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(simple_optimization_problem_func_x_with_constraints
	src/simple_optimization_problem_func_x_with_constraints.cpp
)

target_link_libraries(simple_optimization_problem_func_x_with_constraints
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(simple_optimization_problem_func_xy_with_constraints
	src/simple_optimization_problem_func_xy_with_constraints.cpp
)

target_link_libraries(simple_optimization_problem_func_xy_with_constraints
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(relative_pose
	src/relative_pose.cpp
)

target_link_libraries(relative_pose
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(smoothness
	src/smoothness.cpp
)

target_link_libraries(smoothness
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(georeference-case1
	src/georeference-case1.cpp
)

target_link_libraries(georeference-case1
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(georeference-case2
	src/georeference-case2.cpp
)

target_link_libraries(georeference-case2
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(georeference-case4
	src/georeference-case4.cpp
)

target_link_libraries(georeference-case4
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(surface_reconstruction_from_lidar_point_cloud
	src/surface_reconstruction_from_lidar_point_cloud.cpp
)

target_link_libraries(surface_reconstruction_from_lidar_point_cloud
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(optimizing_scale_VO_with_lidar_data
	src/optimizing_scale_VO_with_lidar_data.cpp
)

target_link_libraries(optimizing_scale_VO_with_lidar_data
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(perspective_camera_intrinsic_calibration
	src/perspective_camera_intrinsic_calibration.cpp
)

target_link_libraries(perspective_camera_intrinsic_calibration
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(bundle_of_rays_intersection
	src/bundle_of_rays_intersection.cpp
)

target_link_libraries(bundle_of_rays_intersection
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(rectangular_object_with_unknown_width_height
	src/rectangular_object_with_unknown_width_height.cpp
)

target_link_libraries(rectangular_object_with_unknown_width_height
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(sheaf_of_planes
	src/sheaf_of_planes.cpp
)

target_link_libraries(sheaf_of_planes
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(view_nns
	src/view_nns.cpp
)

target_link_libraries(view_nns
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)

add_executable(distance_point_to_plane
	src/distance_point_to_plane.cpp
)

target_link_libraries(distance_point_to_plane
   	${OPENGL_LIBRARIES}
	${GLUT_glut_LIBRARY}
	${OpenCV_LIBS}
)






