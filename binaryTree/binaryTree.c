/**
 * \file binaryTree.c
 * \brief A binary tree and its primitives.
 * \author Pierre Mahé, Jérémy Turon
 *
 */

#include <stdlib.h>
#include <assert.h>

#include "binaryTree.h"

struct binaryTree_t{
	int value;
	binaryTree leftSon;
	binaryTree rightSon;
};

/**
 * \fn binaryTree create_BT(int value)
 * \brief create a binary tree with one node.
 *
 * \param value the value contained by the node.
 * \return a binary tree.
*/
binaryTree create_BT(int value) {
	binaryTree bt = (binaryTree) malloc(sizeof(struct binaryTree_t)) ;
	bt->value = value ;
	bt->leftSon = NULL ;
	bt->rightSon = NULL ;

	return bt ;
}

/**
 * \fn void destroy_BT(binaryTree bt)
 * \brief destroy a binary tree, destroy the root, the left son, and the rightSon.
 *
 * \param bt the binary tree to destroy.
*/
void destroy_BT(binaryTree bt) {
	if(bt == NULL)
		return ;

	destroy_BT(bt->leftSon) ;
	destroy_BT(bt->rightSon) ;
	free(bt) ;
}


/**
 * \fn binaryTree getLeftSon_BT(binaryTree bt)
 * \brief Give access to the left son of a binary tree.
 *
 * \param bt the binary tree that you want the left son.
 * \return a binary tree.
*/
binaryTree getLeftSon_BT(binaryTree bt) {
	assert(bt != NULL) ;
	return bt->leftSon ;
}

/**
 * \fn binaryTree getRightSon_BT(binaryTree bt)
 * \brief Give access to the right son of a binary tree.
 *
 * \param bt the binary tree that you want the right son.
 * \return a binary tree.
*/
binaryTree getRightSon_BT(binaryTree bt) {
	assert(bt != NULL) ;
	return bt->rightSon ;
}


/**
 * \fn void setLeftSon_BT(binaryTree bt)
 * \brief Allow to set the left son of a binary tree.
 *
 * \param bt the binary tree that you want to set the left son.
 * \param son the left son to put in the binary tree.
*/
void setLeftSon_BT(binaryTree bt, binaryTree son) {
	assert(bt != NULL) ;
	bt->leftSon = son ;
}

/**
 * \fn void setRightSon_BT(binaryTree bt)
 * \brief Allow to set the right son of a binary tree.
 *
 * \param bt the binary tree that you want to set the right son.
 * \param son the right son to put in the binary tree.
*/
void setRightSon_BT(binaryTree bt, binaryTree son) {
	assert(bt != NULL) ;
	bt->rightSon = son ;	
}

/**
 * \fn void insertValue_BT(binaryTree bt, int position, int value)
 * \brief insert a value in the binary tree
 *
 * \param bt the binary tree that you want to insert a value in.
 * \param position LEFT if you want to insert the value in the left son, RIGHT if you want to do it in the right son. If you do it in the left son, the old left son become the new left son of the new node create to contain the new value, same goes for the right son.
 * \param value the value to insert.
*/
void insertValue_BT(binaryTree bt, int position, int value) {
	assert(bt != NULL) ;
	assert(position == LEFT || position == RIGHT) ;

	if(position == LEFT) {
		binaryTree tmp =getLeftSon_BT(bt) ;
		binaryTree new = create_BT(value) ;
		setLeftSon_BT(bt,new) ;
		setLeftSon_BT(new,tmp) ; 
	}
	else {
		binaryTree tmp = getRightSon_BT(bt) ;
		binaryTree new = create_BT(value) ;
		setRightSon_BT(bt,new) ;
		setRightSon_BT(new,tmp) ; 
	}
}

/**
 * \fn int deleteValue_BT(binaryTree bt, int position)
 * \brief delete a value in the binary tree
 *
 * \param bt the binary tree that you want to delete a value in.
 * \param position LEFT if you want to delete the value in the left son, RIGHT if you want to do it in the right son. The son of the deleted node replace its father in the binary tree. The delete node must have only one son.
 * \return 0 if the operation wasn't successfull, otherwise it was successfull.
*/
int deleteValue_BT(binaryTree bt, int position) {
	assert(bt != NULL) ;
	assert(position == LEFT || position == RIGHT) ;

	if(position == LEFT) {
		binaryTree tmp = getLeftSon_BT(bt) ;
		binaryTree left = getLeftSon_BT(tmp) ;
		binaryTree right = getRightSon_BT(tmp) ;
		if(left != NULL && right != NULL)
			return 0 ;
		free(tmp) ;
		setLeftSon_BT(bt,(left != NULL)? left : right) ;
	}
	else {
		binaryTree tmp = getRightSon_BT(bt) ;
		binaryTree left = getLeftSon_BT(tmp) ;
		binaryTree right = getRightSon_BT(tmp) ;
		if(left != NULL && right != NULL)
			return 0 ;
		free(tmp) ;
		setRightSon_BT(bt,(left != NULL)? left : right) ;
	}
	return 1 ;
}

/**
 * \fn int getValue_BT(binaryTree bt)
 * \brief return the value of the root of a binary tree.
 *
 * \param bt the binary tree that you want to retrieve the value.
 * \return the value in the root of the binary tree.
*/
int getValue_BT(binaryTree bt) {
	assert(bt!=NULL) ;
	return bt->value ;
}

/**
 * \fn void setValue_BT(binaryTree bt, int value)
 * \brief set the value of the root of a binary tree.
 *
 * \param bt the binary tree that you want to set the value.
 * \param value the new value in the root of the binary tree.
*/
void setValue_BT(binaryTree bt, int value) {
	assert(bt!=NULL) ;
	bt->value = value ;
}