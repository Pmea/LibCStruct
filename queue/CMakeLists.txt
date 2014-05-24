add_library ( queue queue.c )

add_executable( test_queue test_queue.c queue.c )

target_link_libraries( test_queue listD )