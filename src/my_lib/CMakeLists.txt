
add_library(my_lib)
target_sources(my_lib
  PUBLIC
    FILE_SET cxx_modules TYPE CXX_MODULES FILES
    my_lib.cpp
)
