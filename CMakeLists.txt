# Minimum required version
cmake_minimum_required(VERSION 3.10)

# Project name
project(CppProjectTemplate)

# Set the C++ standard globally
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # Ensure that this standard is strictly required

# Add common compiler flags globally (for all targets)
add_compile_options(-Wall -Wextra)
# Add extra flags depending on the build type
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O3 -g")

# Add subdirectories
add_subdirectory(libs)
add_subdirectory(main)