add_library ( listS listS.c )

add_executable( test_listS test_listS.c listS.c )

target_link_libraries( test_listS )