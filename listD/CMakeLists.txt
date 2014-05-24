add_library ( listD listD.c )

add_executable( test_listD test_listD.c listD.c )

target_link_libraries( test_listD )
