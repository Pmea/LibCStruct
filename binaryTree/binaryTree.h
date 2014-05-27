/**
 * \file binaryTree.h
 * \brief Header for binaryTree.c .
 * \author Pierre Mahé, Jérémy Turon
 *
*/

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#define LEFT 0
#define RIGHT 1

typedef struct binaryTree_t * binaryTree ;

binaryTree create_BT(int value) ;
void destroy_BT(binaryTree bt) ;

binaryTree getLeftSon_BT(binaryTree bt) ;
binaryTree getRightSon_BT(binaryTree bt) ;

void setLeftSon_BT(binaryTree bt, binaryTree son) ;
void setRightSon_BT(binaryTree bt, binaryTree son) ;

void insertValue_BT(binaryTree bt, int position, int value) ;
int deleteValue_BT(binaryTree bt, int position) ;

int getValue_BT(binaryTree bt) ;
void setValue_BT(binaryTree bt, int value) ;

#endif