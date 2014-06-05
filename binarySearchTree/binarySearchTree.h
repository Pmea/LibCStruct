/**
 * \file binarySearchTree.h
 * \brief Header for binarySearchTree.c .
 * \author Pierre Mahé, Jérémy Turon
 *
*/

#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H 

typedef struct binarySearchTree_t * binarySearchTree ;

/**
 * \fn binarySearchTree create_BST(int value)
 * \brief create a binary search tree with one node.
 *
 * \param value the value contained by the node.
 * \return a binary search tree.
*/
binarySearchTree create_BST(int value) ;
/**
 * \fn void destroy_BST(binarySearchTree bst)
 * \brief destroy a binary search tree.
 *
 * \param bst the binary search tree to destroy.
*/
void destroy_BST(binarySearchTree bst) ;

/**
 * \fn void insertValue_BST(int value)
 * \brief insert a value in the binary search tree.
 * \param bst the binary search tree to work with.
 * \param value the value to insert in the binary search tree.
*/
void insertValue_BST(binarySearchTree bst, int value) ;
/**
 * \fn void deleteValue_BST(binarySearchTree bst, int value) 
 * \brief delete the first occurence of a value in the binary search tree.
 * \param bst the binary search tree to work with.
 * \param value the value to delete in the binary search tree.
*/
void deleteValue_BST(binarySearchTree bst, int value) ;

/**
 * \fn findValue_BST(binarySearchTree bst, int value)
 * \brief find a value in a binary search tree if such a value exists.
 * \param bst the binary search tree to work with.
 * \param value the value to search in the binary search tree.
 * \return the node containing the value we are looking for, NULL if such a value does not exist.
*/
binarySearchTree findValue_BST(binarySearchTree bst, int value) ;

#endif