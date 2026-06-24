project(Engine)

add_library(Engine STATIC
    src/Utils/Log.cpp
)

if (PROJECT_PLATFORM STREQUAL "LINUX")
    target_compile_definitions(Engine PUBLIC
        PLATFORM_LINUX
    )
endif()

target_include_directories(Engine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(Engine PUBLIC
    spdlog::spdlog_header_only
)
