#include <stdlib.h>
#include <stdio.h>

#include "listS.h"


int main(int argc, char* argv[]){
	printf("TEST: creation de liste\n");
	listS l= creat_listS();

	printf("TEST: ajout element liste\n");
	for(int i=0; i<10; i++){
		add_item_listS(l, i);
	}
	printf("TEST: affichage liste\n");
	print_listS(l);

	printf("TEST: suppression element liste\n");
	remove_item_listS(l);

	printf("TEST: affichage liste\n");
	print_listS(l);

	printf("TEST: destruction liste\n");
	destroy_listS(l);

	return EXIT_SUCCESS;
}