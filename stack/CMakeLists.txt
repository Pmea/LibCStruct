add_library ( stack stack.c )

add_executable( test_stack test_stack.c stack.c )

target_link_libraries( test_stack m)