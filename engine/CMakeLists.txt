add_library(Engine
    source/Application.cpp
    source/engine.cpp
)

target_include_directories(Engine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/source
)

target_link_libraries(Engine
    PUBLIC
        glad
        glfw
        OpenGL::GL
)
