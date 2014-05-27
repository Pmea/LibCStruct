/**
 * \file binaryTree.c
 * \brief A binary tree and its primitives.
 * \author Pierre Mahé, Jérémy Turon
 *
 */

#include <stdlib.h>
#include <assert.h>

#include "binarySearchTree.h"
#include "../binaryTree/binaryTree.h"

struct binarySearchTree_t{
	binaryTree tree ;
};

/**
 * \fn binarySearchTree create_BST(int value)
 * \brief create a binary search tree with one node.
 *
 * \param value the value contained by the node.
 * \return a binary search tree.
*/
binarySearchTree create_BST(int value){
	binarySearchTree bst = (binarySearchTree) malloc(sizeof(struct binarySearchTree_t)) ;
	bst->tree = create_BT(value) ;
	return bst ;
}

/**
 * \fn void destroy_BST(binarySearchTree bst)
 * \brief destroy a binary search tree.
 *
 * \param bst the binary search tree to destroy.
*/
void destroy_BST(binarySearchTree bst) {
	destroy_BT(bst->tree) ;
	free(bst) ;
}

void insert(binaryTree bt, int value) {
	if(getValue_BT(bt) <= value) {
		if(getLeftSon_BT(bt) == NULL) 
			insertValue_BT(bt, LEFT, value) ;
		else
			insert(getLeftSon_BT(bt),value) ;
	}
	else {
		if(getRightSon_BT(bt) == NULL) 
			insertValue_BT(bt, RIGHT, value) ;
		else
			insert(getRightSon_BT(bt),value) ;
	}
}

/**
 * \fn void insertValue_BST(int value)
 * \brief insert a value in the binary search tree.
 * \param bst the binary search tree to work with.
 * \param value the value to insert in the binary search tree.
*/
void insertValue_BST(binarySearchTree bst, int value) {
	assert(bst != NULL) ;
	insert(bst->tree, value) ;
}

void delete(binaryTree bt, int value) {
	if(bt == NULL)
		return ;

	int btValue = getValue_BT(bt) ;
	binaryTree leftSon = getLeftSon_BT(bt) ;
	binaryTree rightSon = getRightSon_BT(bt) ;

	if(btValue == value) {
		if(leftSon == NULL) {
			binaryTree tmp = bt ;
			bt = rightSon ;
			free(tmp) ;
 		}
 		else if(rightSon == NULL) {
 			binaryTree tmp = bt ;
			bt = leftSon ;
			free(tmp) ;
 		}
 		else {
 			int newValue = getValue_BT(rightSon) ;
 			setValue_BT(bt,newValue) ;
 			delete(rightSon, newValue) ;
 		}
	}
	else if(btValue < value)
		delete(leftSon, value) ;
	else 
		delete(rightSon, value) ;
}

/**
 * \fn void deleteValue_BST(binarySearchTree bst, int value) 
 * \brief delete the first occurence of a value in the binary search tree.
 * \param bst the binary search tree to work with.
 * \param value the value to delete in the binary search tree.
*/
void deleteValue_BST(binarySearchTree bst, int value) {
	delete(bst->tree, value) ;
}

binarySearchTree findValue_BST(binarySearchTree bst, int value) {
	binaryTree bt = NULL ;
	binaryTree tmp = bst->tree ;

	while(tmp != NULL && bt == NULL) {
		int tmpValue = getValue_BT(tmp) ;
		if(tmpValue == value)
			bt = tmp ;
		else if(tmpValue < value)
			tmp = getLeftSon_BT(tmp) ;
		else
			tmp = getRightSon_BT(tmp) ;
	}

	if(bt == NULL)
		return NULL ;

	binarySearchTree res = (binarySearchTree) malloc(sizeof(struct binarySearchTree_t)) ;
	res->tree = bt ;
	return res ;
}