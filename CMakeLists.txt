cmake_minimum_required(VERSION 3.5)

project(TextProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

string(TOLOWER "${CMAKE_SYSTEM_NAME}" CMAKE_SYSTEM_NAME_LOWER)

if(CMAKE_SYSTEM_NAME_LOWER STREQUAL "windows")
  add_definitions(-DUNICODE)
  add_definitions(-D_UNICODE)
endif()


add_library(counter STATIC src/wordcounter.cpp)
target_include_directories(counter PUBLIC include)

add_subdirectory(examples)
add_subdirectory(tests)
