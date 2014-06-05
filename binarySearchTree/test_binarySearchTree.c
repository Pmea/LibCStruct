#include <stdlib.h>
#include <stdio.h>

#include "binarySearchTree.h"

int main() {

	binarySearchTree bst = create_BST(50) ;
	for(int i = 0 ; i <= 100 ; i+= 10) {
		if(i != 50)
			insertValue_BST(bst,i) ;
	}

	deleteValue_BST(bst,20) ;
	for(int i = 0 ; i <= 100 ; i+=10) {
		if(i == 20) {
			if(findValue_BST(bst,i) != NULL)
				printf("Error %d\n",i);
		} else {
		if(findValue_BST(bst,i) == NULL)
			printf("Error %d\n",i) ;
		}
	}

	destroy_BST(bst) ;
	return EXIT_SUCCESS ;
}