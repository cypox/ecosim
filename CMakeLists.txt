cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(ecosim VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# include dirs
include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${PROJECT_NAME}
  src/ecosim.cpp
  src/argparse.cpp
  src/entity.cpp
  src/exchange.cpp
  src/order_book.cpp
  src/world.cpp
)
