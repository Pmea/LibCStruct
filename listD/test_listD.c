#include <stdio.h>
#include <stdlib.h>

#include "listD.h"


int main(int argc, char* argv[]){

	printf("TEST: creation de liste\n");
	listD l= creat_listD();

	printf("TEST: ajout element liste\n");
	for(int i=0; i<5; i++){
		insert_listD(l, i);
	}
	printf("TEST: affichage liste\n");
	print_listD(l);

	printf("TEST: suppression premiere element liste\n");
	remove_beggin_listD(l);

	printf("TEST: affichage liste\n");
	print_listD(l);

	printf("TEST: suppression dernier element liste\n");
	remove_end_listD(l);

	printf("TEST: affichage liste\n");
	print_listD(l);

	printf("TEST: suppression element liste\n");

	move_prec_listD(l);
	remove_listD(l);

	printf("TEST: affichage liste\n");
	print_listD(l);

	printf("TEST: destruction liste\n");
	destroy_listD(l);

	return EXIT_SUCCESS;
}