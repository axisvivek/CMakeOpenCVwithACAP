cmake_minimum_required(VERSION 3.14.1)
project(hello_opencv)

set(CMAKE_CXX_STANDARD 11)
set(OpenCV_DIR "${CMAKE_CURRENT_LIST_DIR}/install_aarch32/usr/local/lib/cmake/opencv4")
find_package(OpenCV 4 REQUIRED)

# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")


include_directories(${OpenCV_INCLUDE_DIRS})

set(SOURCE_FILES hello_opencv.cpp)
add_executable(hello_opencv ${SOURCE_FILES})
target_link_libraries(hello_opencv ${OpenCV_LIBS})