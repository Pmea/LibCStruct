#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main (int argc, char* argv[]){

	printf("TEST: creation de la file \n");
	queue q= creat_queue();

	printf("TEST: ajout element file\n");
	for(int i=0; i<5; i++){
		push_queue(q, i);
	}
	printf("TEST: affichage de la file\n");
	print_queue(q);

	printf("TEST: suppression d'un element\n");
	pop_queue(q);

	printf("TEST: affichage file\n");
	print_queue(q);

	printf("TEST: recuperation de l'element courant de la file\n");
	printf("valeur: %d\n", get_item_queue(q));

	printf("TEST: destruction file\n");
	destroy_queue(q);

	return EXIT_SUCCESS;
}