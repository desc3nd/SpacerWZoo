cmake_minimum_required(VERSION 3.15)
project(Semestr_2)
add_compile_options(-Wall -Wextra)
set(CMAKE_CXX_STANDARD 14)

add_executable(Semestr_2 main.cpp HumanPlayer.cpp HumanPlayer.h MonkeyPlayer.cpp MonkeyPlayer.h DonkeyPlayer.cpp DonkeyPlayer.h ElephantPlayer.cpp ElephantPlayer.h GameManager.cpp GameManager.h)