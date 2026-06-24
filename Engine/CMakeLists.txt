project(Engine)

add_library(Engine STATIC
    src/Utils/Log.cpp
)

target_include_directories(Engine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(Engine PUBLIC
    spdlog::spdlog_header_only
)
