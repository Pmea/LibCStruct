/** 
* \file listD.h
* \brief Module declarant le type Liste doublement chainée
*/


#ifndef LISTD_H_
#define LISTD_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

/**
* \struct cellule
* \brief cellule de la liste 
*/
typedef struct cell_t * cell;

/**
* \struct listD
* \brief definie l'oject liste doublemet chainée
*/
typedef struct listD_t * listD;

/** \fn creat_listD
* \brief creer une liste doublement chainne vide
* \return une liste vide 
*/
listD creat_listD(void);

/** \fn destroy_listD
* \brief detruit la liste placé en parametre
* \param la liste a detruir
*/
void destroy_listD(listD l);

/** \fn empty_listD
* \brief la fonction indique si la liste est vide ou non
* \param la liste a traité 
* \return true si la liste est vide, false sinon
*/
bool empty_listD(listD l);

/** \fn curs_first_listD
* \brief indique si le curseur est sur le premier element de la liste. Si la liste est vide le curseur est consideré comme sur le premier element. 
* \param la liste en question 
* \return true si le curseur est sur le premier element de la liste, fasle sinon
*/
bool curs_first_listD(listD l);

/** \fn curs_last_listD
* \brief indique si le curseur est sur le dernier element de la liste. Si la liste est vide le curseur est consideré comme sur le dernier element. 
* \param la liste a traiter
* \return true si le curseur est sur le dernier element de la liste, false sinon
*/
bool curs_last_listD(listD l);

/** \fn add_end_listD
* \brief ajoute l'element placé en parametre a la fin de la liste. Le curseur est placé sur le nouvel element
* \param la liste a traiter
* \param l'element a ajouter
*/
void add_end_listD(listD l , int item);

/** \fn add_beggin_listD
* \brief ajoute l'element placé en parametre au debut de la liste. Le curseur est placé sur le nouvel element
* \param la liste a traier
* \param l'element a ajouter
*/
void add_beggin_listD(listD l, int item);

/** \fn insert_listD
* \brief ajoute dans la liste, l'element placé en parametre apres le curseur. Le curseur est placé sur le nouvel element
* \param la liste a traiter
* \param l'element a ajouter
*/
void insert_listD(listD l, int item);

/** \fn remove_beggin_listD
* \brief supprime le premier element de la liste. Le curseur n'est pas bougé sauf si il pointait sur l'element supprimé  dans ce cas il est placé sur le nouveau premier element
* \param la liste a traiter
*/
void remove_beggin_listD(listD l);

/** \fn remove_end_listD
* \brief supprime le dernier element de la liste. Le curseur n'est pas bougé sauf si il pointé sur l'element supprimé dans ce cas il est placé sur le nouveau dernier element 
* \param la liste a traiter
*/
void remove_end_listD(listD l);

/** \fn remove_listD
* \brief supprime l'element pointé par le curseur, le curseur est placé sur l'element suivant de celui qui a etait supprimé
* \param la liste a traiter
*/
void remove_listD(listD l);

/** \fn move_next_listD
*  \brief place le curseur sur l'element suivant. Si le curseur est en fin de liste, la curseur ne change pas de place
*  \param la liste a traiter
*/
void move_next_listD(listD l);

/** \fn  move_prec_listD
* \brief place le curseur sur l'element precedent, si le curseur est en debut de liste le curseur ne change pas de place
* \param la liste a traiter
*/
void move_prec_listD(listD l);

/** \fn move_end_listD
* \brief place le curseur sur le dernier element, si la liste est vide le curseur  ne change pas. Il reste egale a NULL
* \param la liste a traiter
*/
void move_end_listD(listD l);

/** \fn move_beggin_listD
* \brief place le curseur sur le premier element, si la liste est vide le curseur ne change pas. Il reste egale a NULL
* \param la liste a traiter 
*/
void move_beggin_listD(listD l);

/** \fn get_item_listD
* \brief retourne l'element courant de la liste, l'element pointé par le curseur
* \param la liste a traiter
* \return l'element courant
*/
int get_item_listD(listD l);

/* Debbug */

/** \fn print_listD
* \brief affiche la valeur et les valeurs des pointeurs de chaque cellule 
* \param la liste a debbuger
*/
void print_listD(listD l);

#endif /* LISTD_H_ */