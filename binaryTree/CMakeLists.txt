add_library ( binaryTree binaryTree.c )

add_executable( test_binaryTree test_binaryTree.c binaryTree.c )

target_link_libraries( test_binaryTree )