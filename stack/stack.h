#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct stack * stack;

/* empty_stack
** retourne true si la pile est vide, false sinon
*/
bool empty_stack(stack s);

/* creat_stack
** cree un pile vide
*/
stack creat_stack(void);

/* destroy_stack
**	destroy la pile
*/
void destroy_stack(stack s);

/* push_stack
** ajout l'element place en parametre dans la pile, si la pile est pleine push_stack s'ocupe de l'agrandir
*/
void push_stack(stack s, int item);

/* pop_stack
** retir l'element du sommet de pile, si la pile est vide la fonction ne fait rien
*/
void pop_stack(stack s);

/* value_stack
** retourne l'element du sommet de pile
** si la pile est vide la fonction retourne une erreur c'est a l'utilisateur de s'assurer que la pile est non vide
*/
int value_stack(stack s);


/* Debbug */

/* print_stack
** affiche la pile dans sont integralité sans modifier
*/
void print_stack(stack s);

#endif /* STACK_H_ */