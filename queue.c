#include"queue.h"
#include"global.h"

void createQueue(queueType *q)
{
    q->fronte=0;
    q->rear=MAX-1;
    q->sizee=0;
}
int queueFull(queueType q)
{
    return(q.sizee==MAX);
}
int queueEmpty(queueType q)
{
    return(q.sizee==0);
}
void enQueue(EntryType item,queueType *q)
{
    q->rear=(q->rear+1)%MAX;
    q->entry[q->rear]=item;
    q->sizee++;
}
void deQueue(EntryType *item,queueType *q)
{
    *item=q->entry[q->fronte];
    q->fronte=(q->fronte+1)%MAX;
    q->sizee--;
}
int even(queueType *q)
{
    int count=0;
    for(int i=q->fronte; i<q->sizee; i++)
        if((q->entry[i%MAX])%2==0&&(q->entry[i%MAX])!=0)
            count++;
    return count;
}
int lastE(queueType *q){
    int k=q->entry[q->rear];
     q->rear=(q->rear-1)%MAX;
    return k;
}
int firstE(queueType *q){
    int k=q->entry[q->fronte];
    return k;
}
void copyQ(queueType *q,queueType *q2){
      for(int i=q->fronte; i<q->sizee; i++){
       q2->rear=(q2->rear+1)%MAX;
       q2->entry[q2->rear]=q->entry[i];
       q2->sizee++;
      }
}

