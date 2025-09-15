cmake_minimum_required(VERSION 3.5)
project(my_raylib_game C)
set(CMAKE_C_STANDARD 99)


# 添加头文件路径
include_directories("./sources/include")

# 添加库路径
link_directories("./sources/lib")

# 编译
add_executable(${PROJECT_NAME} "sources/main.c")

# 连接 
target_link_libraries(${PROJECT_NAME} raylib winmm gdi32 user32 shell32)
