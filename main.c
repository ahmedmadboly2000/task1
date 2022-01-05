#include <stdio.h>
#include <stdlib.h>
#include"stack.h"
#include"queue.h"
#include"global.h"
int main()
{

    queueType q;
    createQueue(&q);
    queueType q2;
    createQueue(&q2);
    EntryType item[5]={2,3,5,6,7};
    int i=0;
    int item1;
    while(!queueFull(q))
    {
        enQueue(item[i],&q);
        i++;
    }

    while(!queueEmpty(q))
    {
    deQueue(&item1,&q);
    if(item1%2==0){
       printf("%d",item1);}
    }



    return 0;
}
