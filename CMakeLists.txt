cmake_minimum_required(VERSION 3.20)

# ---------------------------------
# Project (neutral template name)
# ---------------------------------
project(OpenGLTemplate LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---------------------------------
# OpenGL (system)
# ---------------------------------
find_package(OpenGL REQUIRED)

# ---------------------------------
# GLAD (GLAD 2 - gl.c variant)
# ---------------------------------
set(GLAD_SRC "${CMAKE_CURRENT_SOURCE_DIR}/GLAD/src/gl.c")
set(GLAD_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/GLAD/include")

if (NOT EXISTS ${GLAD_SRC})
    message(FATAL_ERROR "GLAD source not found at: ${GLAD_SRC}")
endif()

add_library(glad STATIC
    ${GLAD_SRC}
)

target_include_directories(glad PUBLIC
    ${GLAD_INCLUDE}
)

# ---------------------------------
# GLFW (built from source)
# ---------------------------------
add_subdirectory(glfw-3.4)

# ---------------------------------
# App Executable (neutral name)
# ---------------------------------
add_executable(App
    source/main.cpp
)

target_link_libraries(App PRIVATE
    glad
    glfw
    OpenGL::GL
)
