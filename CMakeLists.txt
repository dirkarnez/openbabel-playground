cmake_minimum_required(VERSION 3.20)

# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

project("openbabel-playground")

find_package(OpenBabel3 REQUIRED)

SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

target_include_directories(openbabel INTERFACE ${OpenBabel3_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} 
    "src/main.cpp"
)

target_link_libraries(${PROJECT_NAME} openbabel)
