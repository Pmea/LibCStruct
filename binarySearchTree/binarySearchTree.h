/**
 * \file binarySearchTree.h
 * \brief Header for binarySearchTree.c .
 * \author Pierre Mahé, Jérémy Turon
 *
*/

#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H 

typedef struct binarySearchTree_t * binarySearchTree ;

binarySearchTree create_BST(int value) ;
void destroy_BST(binarySearchTree bst) ;

void insertValue_BST(binarySearchTree bst, int value) ;
void deleteValue_BST(binarySearchTree bst, int value) ;
binarySearchTree findValue_BST(binarySearchTree bst, int value) ;

#endif