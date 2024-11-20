cmake_minimum_required(VERSION 3.0)
project(my_raylib_game C)
set(CMAKE_C_STANDARD 99)


# 头文件
include_directories("./sources/include")

# 库
link_directories("./sources/lib")

# 编译
add_executable(${PROJECT_NAME} "sources/main.c")

# 连接 
target_link_libraries(${PROJECT_NAME} raylib winmm gdi32 user32 shell32)
target_compile_definitions(${PROJECT_NAME} PUBLIC ASSETS_PATH="${CMAKE_CURRENT_SOURCE_DIR}/assets/") # Set the asset path macro to the absolute path on the dev machine
