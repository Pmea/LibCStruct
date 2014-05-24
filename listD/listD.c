/* Liste Doublement Chainee */

/* V0.1 - 23/05/14 */

#include "listD.h"


struct cell_t{
	int value;
	cell prec;
	cell next;
};

struct listD_t{
	cell first;
	cell last;
	cell curs;
};

/* primitive des cellules */

cell creat_cell(int value, cell prec, cell next){
	cell c= malloc(sizeof(struct cell_t));
	c->value= value;
	c->prec= prec;
	c->next= next;
	return c;
}

void destroy_cell(cell c){
	free(c);
}

/* primitive des listes */

listD creat_listD(void){
	listD l= malloc(sizeof(struct listD_t));
	l->first= NULL;
	l->last= NULL;
	l->curs= NULL;
	return l;
}

void destroy_listD(listD l){
	while(!empty_listD){
		remove_beggin_listD(l);
	}
	free(l);
}

bool empty_listD(listD l){
	return l->first == NULL || l->curs == NULL;
}

bool curs_fist_listD(listD l){
	return empty_listD(l) || l->curs == l->first; 
}

bool curs_last_listD(listD l){
	return empty_listD(l) || l->curs== l->last;
}

void add_beggin_listD(listD l, int item){
	cell newC= creat_cell(item, NULL, l->first);
	if(empty_listD(l)){
		l->first= newC;
		l->last= newC;
		move_beggin_listD(l);
		return;
	}
	if(l->first != NULL)
		l->first->prec= newC;
	l->first= newC;
	move_beggin_listD(l);
}

void add_end_listD(listD l, int item){
	cell newC= creat_cell(item, l->last, NULL);
	if(empty_listD(l)){
		l->first= newC;
		l->last= newC;
		move_end_listD(l);
		return;
	}
	if(l->last != NULL)
		l->last->next= newC;
	l->last= newC;
	move_end_listD(l);
}

// insert apres le curseur
void insert_listD(listD l, int item){
	if(empty_listD(l)){
		add_beggin_listD(l, item);
		return;
	}
	if(curs_last_listD(l)){
		add_end_listD(l, item);
		return;
	}
	cell newC;
	if(curs_fist_listD(l)){
		newC= creat_cell(item, l->first, NULL);
		if(l->first == l->last)
			l->last= newC;
		l->first->prec= newC;
		l->first->next= newC;
		l->curs->prec= newC;
		move_next_listD(l);
		return;
	}
	newC= creat_cell(item, l->curs, l->curs->next);
	l->curs->next->prec= newC;
	l->curs->next= newC;
	move_next_listD(l);   // on place le curseur sur le nouvel element
}

void remove_beggin_listD(listD l){
	if(empty_listD(l))
		return;

	cell saveC= l->first;
	l->first= l->first->next;
	if(l->first->next != NULL)
		l->first->prec= NULL;
	else
		l->last= NULL;
	destroy_cell(saveC);
}

void remove_end_listD(listD l){
	if(empty_listD(l))
		return;

	cell saveC= l->last;
	if(l->last->prec != NULL)
		l->last->prec->next= NULL;
	else
		l->first= NULL;
	l->last= l->last->prec;

	if(saveC == l->curs)
		move_end_listD(l);			// si le curseur etait sur le dernier
	destroy_cell(saveC);
}

void remove_listD(listD l){
	if(curs_fist_listD(l)){
		remove_beggin_listD(l);
		return;
	}
	if(curs_last_listD(l)){
		remove_end_listD(l);
		return;
	}

	cell saveC= l->curs;
	l->curs->prec->next= l->curs->next;
	l->curs->next->prec= l->curs->prec;
	move_next_listD(l);

	destroy_cell(saveC);
}

void move_next_listD(listD l){
	if(!curs_last_listD(l))
		l->curs= l->curs->next;
}

void move_prec_listD(listD l){
	if(!curs_fist_listD(l))
		l->curs= l->curs->prec;
}

void move_beggin_listD(listD l){
	l->curs= l->first;
}

void move_end_listD(listD l){
	l->curs= l->last;
}

int get_item_listD(listD l){
	assert(!empty_listD(l));
	return l->curs->value;
}

/* Debbug */

void print_listD(listD l){
	move_beggin_listD(l);
	while(!curs_last_listD(l)){
		printf("%d, ", get_item_listD(l));
		printf("prec %14p curs %14p last %14p\n", l->curs->prec, l->curs, l->curs->next);
		move_next_listD(l);
	}
	printf("%d, ", get_item_listD(l));
	printf("prec %14p curs %14p last %14p\n", l->curs->prec, l->curs, l->curs->next);

}







