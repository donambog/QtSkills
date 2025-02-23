# Root CMakeLists.txt
cmake_minimum_required(VERSION 3.1.0)
project(QtSkills)

# Global settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)

# Find Qt packages
find_package(Qt5 COMPONENTS Core REQUIRED)

# Add subdirectories
add_subdirectory(src/basic)
add_subdirectory(src/timer)
add_subdirectory(src/worker)
add_subdirectory(src/data)
