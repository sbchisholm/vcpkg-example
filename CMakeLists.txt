cmake_minimum_required(VERSION 3.28)

# this is required to allow clangd to find the vcpkg install deps
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# setting the toolchain to use vcpkg
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

project(vcpkg-example CXX)

find_package(fmt CONFIG REQUIRED)
find_package(range-v3 CONFIG REQUIRED)
find_package(cxxopts CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 17)

add_executable(fibo main.cpp)

target_link_libraries(fibo
  PRIVATE
    fmt::fmt
    range-v3::range-v3
    cxxopts::cxxopts)

