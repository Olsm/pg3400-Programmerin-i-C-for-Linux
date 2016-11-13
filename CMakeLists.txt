cmake_minimum_required(VERSION 3.6)
project(pg3400_Programmerin_i_C_for_Linux)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

add_executable(uke2.1 uke2/code/1.c)
add_executable(uke2.2 uke2/code/2.c)
add_executable(uke2.3 uke2/code/3.c)
add_executable(uke2.4 uke2/code/4.c)

add_executable(uke3.1 uke3/1.c)
add_executable(uke3.2 uke3/2.c)
add_executable(uke3.3 uke3/3.c)
add_executable(uke3.4 uke3/4.c)
add_executable(uke3.5 uke3/5.c)
add_executable(uke3.6 uke3/6.c)
add_executable(uke3.7 uke3/7.c)