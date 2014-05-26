/**
* \file queue.c
* \briel Implementation du Module file
*/

/* V0.1 - 24/05/14 */

#include "queue.h"
#include "../listD/listD.h"


struct queue{
	listD list;
};

queue creat_queue(void){
	queue q= (queue) malloc(sizeof(struct queue));
	q->list= creat_listD();
	return q;
}

void destroy_queue(queue q){
	destroy_listD(q->list);
}

bool empty_queue(queue q){
	return empty_listD(q->list);
}

void push_queue(queue q, int item){
	add_beggin_listD(q->list, item);
}

void pop_queue(queue q){
	remove_end_listD(q->list);
}

int get_item_queue(queue q){
	move_end_listD(q->list);
	return get_item_listD(q->list);
}

void print_queue(queue q){
	print_listD(q->list);
}