cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)

Project(ApproximateDRAMandSRAM)

find_package(OpenCV REQUIRED)

message(STATUS "Open library status: ")
message(STATUS "> version: ${OpenCV_VERSION} ")
message(STATUS "libraries: ${OpenCV_LIBS} ")
message(STATUS "> include: ${OpenCV_INCLUDE_DIRS}  ")

find_package(FMT REQUIRED)



include_directories(${OpenCV_INCLUDE_DIRS}) 

aux_source_directory(. ALL_SRCS)
add_executable(main ${ALL_SRCS})

target_link_libraries(main
PUBLIC 
${OpenCV_LIBS}
fmt::fmt
)