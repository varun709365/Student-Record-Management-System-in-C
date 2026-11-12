#include "header.h"
void deleterecord(sll **hptr){
sll *node,*next;
node=*hptr;
while(node){
next=node->next;
free(node);
node=next;
}
//free(*hptr);
*hptr=NULL;
printf("deleted succefully\n");
}