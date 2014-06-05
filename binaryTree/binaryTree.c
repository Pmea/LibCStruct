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

binaryTree create_BT(int value) {
	binaryTree bt = (binaryTree) malloc(sizeof(struct binaryTree_t)) ;
	bt->value = value ;
	bt->leftSon = NULL ;
	bt->rightSon = NULL ;

	return bt ;
}

void destroy_BT(binaryTree bt) {
	if(bt == NULL)
		return ;

	destroy_BT(bt->leftSon) ;
	destroy_BT(bt->rightSon) ;
	free(bt) ;
}


binaryTree getLeftSon_BT(binaryTree bt) {
	assert(bt != NULL) ;
	return bt->leftSon ;
}

binaryTree getRightSon_BT(binaryTree bt) {
	assert(bt != NULL) ;
	return bt->rightSon ;
}


void setLeftSon_BT(binaryTree bt, binaryTree son) {
	assert(bt != NULL) ;
	bt->leftSon = son ;
}

void setRightSon_BT(binaryTree bt, binaryTree son) {
	assert(bt != NULL) ;
	bt->rightSon = son ;	
}


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


int getValue_BT(binaryTree bt) {
	assert(bt!=NULL) ;
	return bt->value ;
}

void setValue_BT(binaryTree bt, int value) {
	assert(bt!=NULL) ;
	bt->value = value ;
}