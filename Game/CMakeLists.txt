project(Game)

add_executable(Game
    src/Main.cpp
)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(Game PUBLIC
        DEBUG
        LOGGING_ENABLED
        ASSERTS_ENABLED
    )
else()
    target_compile_definitions(Game PUBLIC
        NDEBUG
    )
endif()

target_include_directories(Game PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(Game PRIVATE
    Engine
)
