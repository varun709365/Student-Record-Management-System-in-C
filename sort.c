#include "header.h"
void namesort(sll **hptr){
sll *p1=*hptr,*p2,t;
int i,c=0,j;
sll *node;
node=*hptr;
while(node){
node=node->next;
c++;
}
for(i=0;i<c-1;i++){
p2=p1->next;
for(j=0;j<c-1-i;j++){
if(strcmp(p1->name,p2->name)>0){
t.roll=p1->roll;
strcpy(t.name,p1->name);
t.percen=p1->percen;

p1->roll=p2->roll;
strcpy(p1->name,p2->name);
p1->percen=p2->percen;

p2->roll=t.roll;
strcpy(p2->name,t.name);
p2->percen=t.percen;
}
p2=p2->next;
}
p1=p1->next;
}
}
void percensort(sll **hptr){
sll *p1=*hptr,*p2,t;
int i,c=0,j;
sll *node;
node=*hptr;
while(node){
node=node->next;
c++;
}
for(i=0;i<c-1;i++){
p2=p1->next;
for(j=0;j<c-1-i;j++){
if(p1->percen>p2->percen){
t.roll=p1->roll;
strcpy(t.name,p1->name);
t.percen=p1->percen;

p1->roll=p2->roll;
strcpy(p1->name,p2->name);
p1->percen=p2->percen;

p2->roll=t.roll;
strcpy(p2->name,t.name);
p2->percen=t.percen;
}
p2=p2->next;
}
p1=p1->next;
}
}

void sortrecord(sll **hptr){
char ch;
printf("N/n sort with names\n P/p sort with percentage\n");
scanf(" %c",&ch);
if(ch>='A' && ch<='Z')
ch=ch+32;
switch(ch){
case 'n':namesort(hptr);break;
case 'p':percensort(hptr);break;
default:printf("entyer correct option\n");
}
}
~
