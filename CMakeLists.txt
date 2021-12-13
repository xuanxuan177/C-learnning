cmake_minimum_required(VERSION 3.20)
project(C_learnning)
set(CMAKE_CXX_STANDARD 20)
aux_source_directory (./include Lib_LIST)
# 添加文件夹include为头搜索路径
include_directories (./include)
add_executable(C_learnning main.cpp ${Lib_LIST})
