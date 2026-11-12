#include "header.h"
void showlist(sll *hptr){
printf("\nstudent data\n");
        while(hptr){
                printf("%d       %s      %f     \n",hptr->roll,hptr->name,hptr->percen);
                hptr=hptr->next;
        }

}

void addrecord(sll **hptr){
        static int i=1,min=1,max;
        int j;
        sll *new,*node,*prev;
        node=*hptr;
        new=malloc(sizeof(sll));
        printf("enter name and value ");
        scanf("%s%f",new->name,&new->percen);
        if(*hptr==NULL){
i=1;
                new->roll=i++;
                *hptr=new;
                new->next=NULL;

                node=*hptr;
        }
        else{
                node=*hptr;

                for(j=1;j<i;j++){

node=*hptr;
while(node){
                        if(node->roll==j){
break;
}
                        else
                                node=node->next;
}
if(node==NULL){
break;
}
}
                if(j==i)
                        i++;
                new->roll=j;
                node=*hptr;
while(node->next)
node=node->next;
node->next=new;
new->next=NULL;
}
}

