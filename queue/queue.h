/**
* \file queue.h
* \briel Module definissant les files
*/

#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* \struct queue
* \ brief L'objet file 
*/
typedef struct queue * queue;

/** \fn creat_queue
*   \brief creer une file vide
*   \return la file cree
*/ 
queue creat_queue();

/** \fn destroy_queue
*   \brief detruit la file placé en parametre
*   \param la file a detruir
*/ 
void destroy_queue( queue q);

/** \fn empty_queue
*   \brief test si la file est vide
*   \param la file a tester
*   \return return true si la file est vide et false sinon
*/ 
bool empty_queue(queue q);

/** \fn push_queue
*   \brief ajout element dans la file
*   \param la file a traiter
*   \param item que l'on veut ajouter
*/ 
void push_queue(queue q, int item);

/** \fn pop_queue
*   \brief supprime l'element le plus ancien de la file
*   \param la file a traiter
*/ 
void pop_queue(queue q);

/** \fn get_item_queue
*   \brief donne la valeur de l'element en tete de file (le plus ancien)
*   \param la file a traiter
*   \return la valeur de l'element
*/ 
int get_item_queue(queue q);


/** \fn print_queue
*   \brief Debbug 
*/
void print_queue(queue q);

#endif /* QUEUE_H_ */