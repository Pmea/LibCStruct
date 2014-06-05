#include <stdlib.h>
#include <stdio.h>

#include "binaryTree.h"

int main() {
	printf("Beginning binary tree's test.\n") ;

	binaryTree bt = create_BT(0) ;
	setLeftSon_BT(bt,create_BT(1)) ;
	setRightSon_BT(bt,create_BT(2)) ;

	setRightSon_BT(getLeftSon_BT(bt),create_BT(3)) ;
	setLeftSon_BT(getRightSon_BT(bt),create_BT(4)) ;

	insertValue_BT(getLeftSon_BT(bt),LEFT,5) ;
	insertValue_BT(getRightSon_BT(bt),RIGHT,6) ;

	setValue_BT(bt,10) ;

	printf("%d ", getValue_BT(bt)) ;

	printf("%d ", getValue_BT(getLeftSon_BT(bt))) ;
	printf("%d ", getValue_BT(getLeftSon_BT(getLeftSon_BT(bt)))) ;
	printf("%d ", getValue_BT(getRightSon_BT(getLeftSon_BT(bt)))) ;

	printf("%d ", getValue_BT(getRightSon_BT(bt))) ;
	printf("%d ", getValue_BT(getLeftSon_BT(getRightSon_BT(bt)))) ;
	printf("%d \n", getValue_BT(getRightSon_BT(getRightSon_BT(bt)))) ;

	deleteValue_BT(getRightSon_BT(bt),RIGHT) ;
	if(getRightSon_BT(getRightSon_BT(bt)) != NULL)
		printf("Error\n") ;

	destroy_BT(bt) ;

	return EXIT_SUCCESS ;
}