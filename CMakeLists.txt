cmake_minimum_required(VERSION 2.8.12)
project(tp2)


set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")


IF(CMAKE_BUILD_TYPE MATCHES Debug)
    message("Debug mode")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g3 -O0")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
ENDIF()

IF(CMAKE_BUILD_TYPE MATCHES Release)
    message("Release mode")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
ENDIF()

# si se usa un virtual environment setearlo aca o desde la consola
#set(PYTHON_EXECUTABLE "/path/to/bin/python")
#set(PYTHON_LIBRARY "/path/to/lib/libpytho.so")

include_directories(eigen)

add_subdirectory(pybind11)

pybind11_add_module(predict
                    src/predict.cpp
                    src/cml.cpp)


# This variable is used to locate the bin directory where the application will be installed
set(CMAKE_INSTALL_PREFIX
        ${PROJECT_SOURCE_DIR}
        CACHE PATH "Python custom modules directory" FORCE)

message(CMAKE_INSTALL_PREFIX = "${CMAKE_INSTALL_PREFIX}")

install(TARGETS predict DESTINATION ${CMAKE_INSTALL_PREFIX}/notebooks)



# si se quiere hacer un ejecutable "tp3" que incluya pybind11, utilizar las
# siguientes 3 instrucciones de cmake.

include_directories(pybind11/include)

add_executable(tp3_pybind
        src/main_pybind.cpp
        src/cml.cpp)

target_link_libraries(tp3_pybind PRIVATE pybind11::embed)

# sino hacer lo siguiente manteniendo las dependencias por separado
add_executable(tp3
        src/main.cpp
        src/cml.cpp)
