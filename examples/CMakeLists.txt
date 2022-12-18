cmake_minimum_required(VERSION 3.5)

project(TextProject LANGUAGES CXX)


add_executable(TextProject main.cpp)

target_link_libraries(TextProject PRIVATE counter)

