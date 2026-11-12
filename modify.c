#include "header.h"
void modify(sll *hptr){
char ch;
printf("R/r for search by roll number\n N/n search by name\n P/p for persentage\n");
scanf(" %c",&ch);
if(ch>='A' && ch<='B')
ch=ch+32;
switch(ch){
case 'r':rmodify(hptr);break;
case 'p':pmodify(hptr);break;
case 'n':nmodify(hptr);break;
default:printf("enter correct option\n");
}
}
void nmodify(sll *hptr){
sll *node;
node=hptr;
char n[20];
printf("name to modify=");
scanf("%s",n);
while(node){
if(strcmp(node->name,n)==0){
printf("name=%s\n",node->name);
printf("perc=%f\n",node->percen);
printf("modifiefd name=");
scanf("%s",node->name);
printf("modified persen=");
scanf("%f",&node->percen);
break;
}
else
node=node->next;
}
if(node==NULL)
printf("not founded\n");
}
void pmodify(sll *hptr){
sll *node;
node=hptr;
float n;
printf("percentage to modifyi=");
scanf("%f",&n);
while(node){
if(node->percen==n){
printf("name=%s\n",node->name);
printf("perc=%f\n",node->percen);
printf("modifiefd name=");
scanf("%s",node->name);
printf("modified persen=");
scanf("%f",&node->percen);
break;
}
else
node=node->next;
}
if(node==NULL)
printf("not founded\n");
}
void rmodify(sll *hptr){
sll *node;
node=hptr;
int n;
printf("number to modifyi=");
scanf("%d",&n);
while(node){
if(node->roll==n){
printf("name=%s\n",node->name);
printf("perc=%f\n",node->percen);
printf("modifiefd name=");
scanf("%s",node->name);
printf("modified persen=");
scanf("%f",&node->percen);
break;
}
else
node=node->next;
}
if(node==NULL)
printf("not founded\n");
}
~
~
