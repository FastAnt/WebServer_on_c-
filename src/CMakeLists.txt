project(web_server)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#file(GLOB Dir1_Sources RELATIVE "parser" "*.h" "*.hpp")
file(GLOB_RECURSE HEADERS "*.h" "*.hpp")
file(GLOB_RECURSE SOURCES "*.cpp")

include_directories(${PROJECT_SOURCE_DIR}/parser/)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
