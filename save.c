#include "header.h"
void saverecord(sll *hptr){
sll *node;
node=hptr;
FILE *fs=fopen("studen.dat","w");
while(node){
fprintf(fs,"%d %s %f\n",node->roll,node->name,node->percen);
node=node->next;

}

}
