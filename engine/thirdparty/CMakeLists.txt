# GLAD
add_library(glad STATIC
    ${CMAKE_CURRENT_LIST_DIR}/../../GLAD/src/gl.c
)

target_include_directories(glad PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/../../GLAD/include
)
