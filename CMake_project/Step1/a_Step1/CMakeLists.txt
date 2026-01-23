# TODO1: Set the minimum required version of CMake to be 3.23
cmake_minimum_required(VERSION 3.23)

# TODO2: Create a project named Tutorial
project(Tutotrial)

# TODO3 Add a library target called MathFunctions to the project
add_library(MathFunctions)

# TODO4 Add the source and header file located in Step1/MathFunctions to the
#        MathFunctions target, note that the intended way to include the
#        MathFunctions header is:
#          #include <MathFunctions.h>
target_sources(MathFunctions
    PRIVATE
        src/MathFunctions.cxx

    PUBLIC
        FILE_SET myHeaders
        TYPE HEADERS
        BASE_DIRS
           include
        FILES
            include/MathFunctions.h
)

