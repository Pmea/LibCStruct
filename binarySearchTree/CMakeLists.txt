add_library ( binarySearchTree binarySearchTree.c )

add_executable( test_binarySearchTree test_binarySearchTree.c binarySearchTree.c )

target_link_libraries( test_binarySearchTree binaryTree)