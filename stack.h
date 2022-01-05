#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include"global.h"
typedef struct {
EntryType entry[MAX];
EntryType top;

}stackType;

void createStack(stackType *s);
int stackEmpty(stackType  s);
int stackFull(stackType s);
void push(EntryType item ,stackType *s);
void pop(EntryType *item,stackType*s);
int frist(EntryType *item,stackType s);
int last(EntryType *item,stackType s);
void copys(stackType *s,stackType *s1);
#endif // STACK_H_INCLUDED

