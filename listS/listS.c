/* Liste Simplement Chaine */

/* V0.1 - 22/05/14 */

#include "listS.h"


struct cell_t{
 int item;
 cell next;
};

struct listS_t{
	cell first;
	cell suiv;
	cell curs;
};

/* Primitive Cellule */

cell creat_cell(int item){
	cell c= malloc(sizeof(struct cell_t));
	c->item= item;
	c->next= NULL;
	return c;
}

void destroy_cell(cell c){
	free(c);	
}


/* Primitive List */

bool empty_listS(listS l){
	return l->first == NULL;
}

// Si la liste est vide, le cursurs est a la fin 
bool end_listS(listS l){
	return (l->curs == NULL || l->curs->next == NULL);
}

// Si la liste est vide, le cursurs est au debut
bool begin_listS(listS l){
	return l->first == l->curs;
}

void to_begin_listS(listS l){
	l->curs = l->first;
}

void to_end_listS(listS l){
	to_begin_listS(l);				// doit on forcement le remettre au debut ou cela est une securité inutile ?
	while(!end_listS(l))
		move_next_listS(l);
}

bool move_next_listS(listS l){
	if(end_listS(l))
		return false;
	l->curs= l->curs->next;
	return true;
}


listS creat_listS(void){
	listS l = malloc(sizeof(struct listS_t));
	l->first= NULL;
	l->suiv= NULL;
	l->curs= NULL;
	return l;
}

void destroy_listS(listS l){
	to_begin_listS(l);

	cell tmp= l->first;
	while(! empty_listS(l)){
		tmp= l->first;
		l->first= l->first->next;
		free(tmp);
	}
}

// retourne la valeur de l'element courrant et si la liste vide -1 (autre valeur) ou assert ?
int get_current_item_listS(listS l){
	if(!empty_listS(l))
		return l->curs->item;
	assert(0);
}

cell get_current_cell_listS(listS l){
	if(!empty_listS(l))
		return l->curs;
	assert(0);
}

// on place le curseurs sur le nouvel element
void add_item_listS(listS l, int item){
	cell newC= creat_cell(item);
	
	if(empty_listS(l)){
		l->first= newC;
		to_begin_listS(l);
		return;
	}

	if(!end_listS(l))
		newC->next= l->curs->next;
	else
		newC->next= NULL;
	l->curs->next= newC;
	move_next_listS(l);
}

void remove_item_listS(listS l){
	if(empty_listS(l) || l->curs == NULL)
		return;

	cell saveC= l->first;

	if(l->first == l->curs){
		if(!end_listS(l))
			l->first = l->curs->next;
		else
			l->first = NULL;
		to_begin_listS(l);
		destroy_cell(saveC);
		return;
	}

	while(saveC->next != l->curs){
		saveC= saveC->next;
	}
	saveC->next= l->curs->next;
	destroy_cell(l->curs);
	l->curs= saveC->next;

}

void remove_value_listS(listS l, int value){
	// si la liste est vide
	if(empty_listS(l))
		return;

	to_begin_listS(l);
	cell saveC;

	//si l'item a supprimer est le premier
	if(get_current_item_listS(l) == value){
		l->first = l->first->next;
		destroy_cell(l->curs);
		to_begin_listS(l);
	}

	saveC= get_current_cell_listS(l);
	move_next_listS(l);

	while(!end_listS(l)){
		if(get_current_item_listS(l) == value){
			saveC->next= l->curs->next;
			destroy_cell(l->curs);
			l->curs= saveC;
		}
		saveC= saveC->next;
		move_next_listS(l);
	}

	if(get_current_item_listS(l) == value){
		saveC->next= l->curs->next;
		destroy_cell(l->curs);
		l->curs= saveC;
	}
}



/* Debbug */

void print_listS(listS l){
	to_begin_listS(l);
	while(! end_listS(l)){
		printf("%d, ", get_current_item_listS(l));
		move_next_listS(l);
	}
	printf("\n");

}
