cmake_minimum_required(VERSION 3.22.1)
project(opencv_cmake CXX) 
# Specify the C++ standard for all files
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CXX_EXTENSIONS NO)
# UBICAMOS EL PAQUETE OpenCV (El que use vino cuando instale ROS2)
find_package( OpenCV REQUIRED )
# AÑADIMOS LOS DIRECTORIOS "include" OPENCV
include_directories( ${OpenCV_INCLUDE_DIRS} )
message("Añadiendo OpenCV include directories:")
message(${OpenCV_INCLUDE_DIRS} )
# COMPILAMOS NUESTRO EJECUTABLE ESPECIFICANDO LAS LIBRERIAS (Y HEADERS)
add_executable(demo demo.cpp )
target_link_libraries(demo ${OpenCV_LIBS} )
message("Librerias OpenCV:")
message(${OpenCV_LIBS} )