#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include"global.h"
typedef struct{
    int fronte;
    int rear;
    int sizee;
    EntryType entry[MAX];
}queueType;
void createQueue(queueType *q);
int queueFull(queueType q);
int queueEmpty(queueType q);
void enQueue(EntryType item,queueType *q);
void deQueue(EntryType *item,queueType *q);
int even(queueType *q);
int lastE(queueType *q);
int firstE(queueType *q);
void copyQ(queueType *q,queueType *q2);

#endif // QUEUE_H_INCLUDED
