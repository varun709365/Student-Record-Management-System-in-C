#include "header.h"
void reverse(sll **hptr){
sll *node,*start,*prev;
node=*hptr;
int n=0,i,j;
while(node){
n++;
if(node->next==NULL)
start=node;
node=node->next;
}
for(i=0;i<n-1;i++){
node=*hptr;
for(j=0;j<n-1-i;j++){
prev=node;
node=node->next;
}
node->next=prev;
}
node=*hptr;
node->next=NULL;
*hptr=start;
//showlist(*hptr);
}
