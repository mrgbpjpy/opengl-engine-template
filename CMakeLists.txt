cmake_minimum_required(VERSION 3.20)

project(EngineProject LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)

# Third-party libs (root-level)
add_subdirectory(glfw-3.4)

# Engine dependencies
add_subdirectory(engine/thirdparty)

# Engine source
add_subdirectory(engine)

# Application
add_executable(App
    source/main.cpp
)

target_link_libraries(App PRIVATE Engine)
