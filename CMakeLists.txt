cmake_minimum_required(VERSION 3.6)
project(RandomArt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SOURCE_FILES
        EasyBMP.h
        EasyBMP.cpp
        EasyBMP_BMP.h
        EasyBMP_DataStructures.h
        EasyBMP_VariousBMPutilities.h
    ExprNode.h
    ExprNode.cpp
    ExprBuilder.h
    ExprBuilder.cpp
    main.cpp)

add_executable(RandomArt ${SOURCE_FILES})
set_target_properties(RandomArt PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR} )
