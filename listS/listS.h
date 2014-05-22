#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

typedef struct cell_t * cell;
typedef struct listS_t * listS;


/* empty_listS
** retourne un booleen si il n'y a pas d'element dans la liste
*/
bool empty_listS(listS l);

/* end_listS
** retourne un booleen si le curseur se trouve en fin de liste 
** si la liste est vide alors la fonction retourne true
*/
bool end_listS(listS l);

/* begin_listS
** retourne un booleen si le curseur se trouve en debut de liste
** si la liste est vide la fonction retourne true
*/
bool begin_listS(listS l);

/* to_begin_listS place le curseur sur le premiere element de la liste */
void to_begin_listS(listS l);
/* to_end_listS place le cursuer sur le dernier element de la liste */
void to_end_listS(listS l);

/* move_next_listS fait avancer le curseur de la liste a l'element suivant 
** si l'element ne peut pas avancé la fonction retourne false
** true dans l'autre cas
*/
bool move_next_listS(listS l);

/* creat_listS initialise un liste Simplement chainé 
*/
listS creat_listS(void);

/* destroy_listS detruit la liste placé en parametre 
*/
void destroy_listS(listS l);

/* retourne la valeur de l'element courrant (pointé par le curseur) 
*/
int get_current_item_listS(listS l);

/* ajoute un element a la liste, au niveau du pointeur 
** le curseur est placé sur l'element ajouté
*/
void add_item_listS(listS l, int item);

/* supprime l'element courant 
** le curseur est placé sur l'element suivant de l'element supprimé 
*/
void remove_item_listS(listS l);

/* supprime la valeur de la liste 
** le curseur est placé sur l'element suivant du dernier element supprimé
*/
void remove_value_listS(listS l, int value);


/* Debbug */

/* affiche la liste place en parametre 
** affiche change la place du curseur 
*/
void print_listS(listS l);

#endif /* LISTS_H_ */