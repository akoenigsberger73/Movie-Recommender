cmake_minimum_required(VERSION 3.23)
project(MovieRecommender)

set(CMAKE_CXX_STANDARD 14)

add_executable(MovieRecommender main.cpp Movie.cpp Movie.h)
