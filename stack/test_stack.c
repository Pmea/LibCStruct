#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(int argc, char* argv[]){
	printf("TEST: creation stack\n");
	stack s= creat_stack();
	printf("TEST: ajout element stack\n");
	for(int i=0; i<20; i++){
		push_stack(s,i);
			print_stack(s);

	}
	printf("TEST: affichage stack\n");
	print_stack(s);
	printf("TEST: suppression element stack\n");
	for(int i=0; i<15; i++){
		pop_stack(s);
	}
	printf("TEST: affichage stack\n");
	print_stack(s);
	printf("TEST: destruction stack\n");
	destroy_stack(s);

	return EXIT_SUCCESS;
}