
#include"stack.h"
#include"global.h"

void createStack(stackType *s){
    s->top=-1;
}
int stackEmpty(stackType  s){
    return(s.top==-1);
}
int stackFull(stackType s){
    return(s.top== MAX-1);
}
void push(EntryType item ,stackType *s){
    s->top++;
    s->entry[s->top]=item;
}
void pop(EntryType *item,stackType *s){
    *item=s->entry[s->top];
    s->top--;
}
int frist(EntryType *item,stackType s){
    return *item=s.entry[0];

}

int last(EntryType *item,stackType s){
    return *item=s.entry[MAX-1];
}
void copys(stackType *s,stackType *s1){
    int i;

    for(i=0;i<MAX;i++){
       s1->entry[i]=s->entry[i];
       s1->top++;
    }

}
