/**
* \file listS.h
* \briel Module definissant les listes simplements chainees
*/

#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

/**
*  \struct cellule
*  \brief cellule pour les listes
*/
typedef struct cell_t * cell;

/**
* \struct listS
* \brief definie l'oject liste simplement chainé
*/
typedef struct listS_t * listS;


/** \fn empty_listS
* \param la liste a traiter
* \return retourne true si il n'y a pas d'element dans la liste, false sinon
*/
bool empty_listS(listS l);

/** \fn end_listS
*  \param la liste a traiter
*  \return retourne true si le curseur se trouve en fin de liste, false sinon. Si la liste est vide la fonction retourne true   
*/
bool end_listS(listS l);

/** \fn begin_listS
*  \param la liste a traiter
*  \return retourne true si le curseur se trouve en debut de liste, false sinon. Si la liste est vide la fonction retourne true
*/
bool begin_listS(listS l);

/** \fn to_begin_listS 
* \brief place le curseur sur le premiere element de la liste. Si la liste est vide le curseur est egal a NULL
* \param la liste a traiter
*/
void to_begin_listS(listS l);

/** \fn to_end_listS 
* \brief place le cursuer sur le dernier element de la liste. Si la liste est vide le cureur est egal a NULL
* \param la liste a traiter
*/
void to_end_listS(listS l);

/** \fn move_next_listS 
* \brief fait avancer le curseur de la liste a l'element suivant. si la liste est vide la fonction enfait rien si l'element ne peut pas avancé la fonction retourne false, true sinon
* \param la liste a traiter
* \return true si la fonction reussi a faire avancer le curseur, false si la fontion echoue.
*/
bool move_next_listS(listS l);

/** \fn creat_listS 
* \brief initialise un liste simplement chainee 
* \return retourne une liste simplement chainee vide 
*/
listS creat_listS(void);

/** \fn destroy_listS 
* \brief detruit la liste placé en parametre 
* \param la liste a traiter
*/
void destroy_listS(listS l);

/* \fn get_item_listS
* \brief recupere l'element courant, l'element pointe par le curseur
* \param la liste dont on veut recuperer l'element
* \return returne la valeur de l'element courant 
*/
int get_item_listS(listS l);

/* \fn add_item_listS
* \brief ajoute un element a la liste, au niveau du curseur. Devant l'ancienne element pointé par le curseur
* le curseur est placé sur l'element ajouté
* \param la liste en question
* \param l'element a ajouter
*/
void add_item_listS(listS l, int item);

/* \fn remove_item_listS
* \brief supprime l'element courant de la liste. Si la liste est vide la fonction ne fait rien 
* \param la liste a traiter
*/
void remove_item_listS(listS l);

/* \fn remove_value_listS 
* \brief supprime toute les occurnaces d'une valeur dans la liste
* le curseur est placé sur l'element suivant du dernier element supprimé
*/
void remove_value_listS(listS l, int value);


/* Debbug */

/* \fn print_listS
* \brief affiche la liste place en parametre 
* \param la liste a traiter 
*/
void print_listS(listS l);

#endif /* LISTS_H_ */