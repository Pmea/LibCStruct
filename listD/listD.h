#ifndef LISTD_H_
#define LISTD_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct cell_t * cell;
typedef struct listD_t * listD;

/* creat_listD
** creer une liste doublement chainne vide
*/
listD creat_listD(void);

/* destroy_listD
** detruit la liste placé en parametre
*/
void destroy_listD(listD l);

/* empty_listD
** retourne true si la liste est vide
*/
bool empty_listD(listD l);

/* curs_first_listD
** retourne true si le curseur est sur le premier element de la liste
*/
bool curs_first_listD(listD l);

/* curs_last_listD
** retourne true si le curseur est sur le dernier element de la liste
*/
bool curs_last_listD(listD l);

/* add_end_listD
** ajoute un element placé en parametre a la fin d'une liste
** place le curseur sur le nouvel element
*/
void add_end_listD(listD l , int item);

/* add_beggin_listD
** ajoute un element placé en parametre au debut de la liste
** place le curseur sur le nouvel element
*/
void add_beggin_listD(listD l, int item);

/* insert_listD
** ajoute un element placé en parametre apres le curseur 
** place le curseur sur le nouvel element
*/
void insert_listD(listD l, int item);

/* remove_beggin_listD
** supprime le premier element de la liste, 
** le curseur n'est pas bougé sauf si il pointait sur l'element supprimé dans ce cas il est placé sur le nouveau premiere element
*/
void remove_beggin_listD(listD l);

/* remove_end_listD
** supprime le dernier element de la liste, 
** le curseur n'est pas bougé sauf si il pointé sur l'element supprimé dans ce cas il est placé sur le nouveau dernier element 
*/
void remove_end_listD(listD l);

/* remove_listD
** supprime l'element pointé par le curseur, le curseur est placé sur l'element suivant a celui qui a etait supprimé
*/
void remove_listD(listD l);

/* move_next_listD
** place le curseur sur l'element suivant, si le curseur est en fin de liste, la curseur ne change pas de place
*/
void move_next_listD(listD l);

/* move_prec_listD
** place le curseur sur l'element precedent, si le curseur est en debut de liste le curseur ne change pas de place
*/
void move_prec_listD(listD l);

/* move_end_listD
** place le curseur sur le dernier element, si la liste est vide le curseur  ne change pas. Il reste egale a NULL
*/
void move_end_listD(listD l);

/* move_beggin_listD
** place le curseur sur le premier element, si la liste est vide le curseur ne change pas. Il reste egale a NULL
*/
void move_beggin_listD(listD l);

/* get_item_listD
** retourne l'element courant de la liste, l'element pointé par le curseur
*/
int get_item_listD(listD l);

/* Debbug */

/* print_listD
** affiche la valeur et les valeurs des pointeurs de chaque cellule 
*/
void print_listD(listD l);

#endif /* LISTD_H_ */