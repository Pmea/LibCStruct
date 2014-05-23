/* Pile */

/* V0.1 - 23/05/14 */

#include "stack.h"

#define INIT_SIZE 1 		// initial of stack

struct stack{
	int top;
	int* tab;
	int size;
};


stack creat_stack(void){
	stack s= malloc(sizeof(struct stack));
	s->top= -1;
	s->size= INIT_SIZE;
	s->tab= (int*) malloc(sizeof(int) * s->size);
	return s;
}

void destroy_stack(stack s){
	if(s->size != 0)
		free(s->tab);
	free(s);
}

bool empty_stack(stack s){
	return s->top == -1;
}

bool full_stack(stack s){
	return s->top == s->size -1;
}

void resize_stack(stack s, int new_size){
	s->tab= realloc(s->tab, sizeof(int) * new_size);
	s->size= new_size;
}

void push_stack(stack s, int item){
	if(full_stack(s)){
		resize_stack(s, s->size * 2);
	}
	s->top++;
	s->tab[s->top]= item;
}

void pop_stack(stack s){
	if(empty_stack(s))
		return;
	s->top--;
	if(s->top < s->size / 4)
		resize_stack(s, s->size/4);
}

int value_stack(stack s){
	assert(empty_stack(s));
	return s->tab[s->top];
}


/* Debbug */

void print_stack(stack s){
	printf("stack size: %d\n", s->size);
	for(int i=s->top; i>=0; i--){
		printf("%d,\n", s->tab[i]);
	}
	printf("\n");
}


