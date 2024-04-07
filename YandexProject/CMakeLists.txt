cmake_minimum_required(VERSION 3.0.0)
project(YaProject VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(YaProject main.cpp main.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

include_directories("/usr/local/opt/cpp-httplib/include")
include_directories("/usr/local/opt/nlohmann-json/include")
