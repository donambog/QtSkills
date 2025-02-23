# CMake Keywords Explanation for QtSkills

## Root CMakeLists.txt Keywords

### `cmake_minimum_required(VERSION 3.1.0)`
- Specifies the minimum version of CMake required
- Must be the first command in CMakeLists.txt

### `project(QtSkills)`
- Declares the project name
- Sets up project-specific variables

### `set(CMAKE_CXX_STANDARD 17)`
- Configures C++ standard to C++17
- Global setting for all targets

### `set(CMAKE_AUTOMOC ON)`
- Enables Qt's Meta-Object Compiler (MOC)
- Required for Qt features like signals and slots

### `find_package(Qt5 COMPONENTS Core REQUIRED)`
- Searches for Qt5 installation
- COMPONENTS specifies required Qt modules
- REQUIRED makes the build fail if Qt5 is not found

### `add_subdirectory(src/basic)`
- Tells CMake to process the CMakeLists.txt in specified directory
- Builds targets defined in that subdirectory

## Subdirectory CMakeLists.txt Keywords

### `add_executable(hello hello.cpp)`
- Creates an executable target named 'hello'
- First argument: target name
- Subsequent arguments: source files
- Example: `add_executable(worker_example worker.cpp worker.h worker_main.cpp)`
  - Creates 'worker_example' executable from multiple source files

### `target_link_libraries(hello Qt5::Core)`
- Links libraries to target
- First argument: target name (must match add_executable)
- Subsequent arguments: libraries to link
- Qt5::Core is the Qt Core library

## Path Handling
- In `add_executable`, paths are relative to current CMakeLists.txt location
- Example: If in src/basic/CMakeLists.txt, use:
  ```cmake
  add_executable(hello hello.cpp)  # Not src/basic/hello.cpp
  ```
```
