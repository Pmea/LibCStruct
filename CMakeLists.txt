 cmake_minimum_required( VERSION 2.6 )

project( structure )

add_definitions( -std=c11 -g )


SET(CMAKE_EXE_LINKER_FLAGS -pg)

include_directories( includes )

add_subdirectory( listS )
add_subdirectory( stack )