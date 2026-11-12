#include "header.h"
void delete(sll **hptr){
        char ch;
        printf("R/r enter roll number to delete\nN/n enter name to delete");

        scanf(" %c",&ch);
        if((ch>='A') && (ch<='Z'))
                ch=ch+32;
        switch(ch){
                case 'r':roldelete(hptr);break;
                case 'n':namedelete(hptr);break;
                default:printf("enter correct option");
                        break;
        }


}

void namedelete(sll **hptr){
        sll *node,*prev;
        node=*hptr;
        char n[20];
printf("enter name=");
        scanf("%s",n);
        if((node->next==NULL) && (strcmp(node->name,n)==0)){
                free(node);
                *hptr=NULL;
        }
        else{
                if(strcmp(node->name,n)==0){
                        *hptr=node->next;
                        free(node);
                }
                else{
                        node=node->next;
                        prev=*hptr;
                        while(node){
                                if(strcmp(node->name,n)!=0){
                                        node=node->next;
                                        prev=prev->next;
                                }
                                else{
                                        prev->next=node->next;
                                        free(node);
printf("deleted\n");
break;
                                }
                        }
if(node==NULL)
printf("not detected\n");
                }
        }
}
void roldelete(sll **hptr){
        sll *node,*prev;
        node=*hptr;
        int n;
printf("enter roll number=");
        scanf("%d",&n);
        if((node->next==NULL) && (node->roll==n)){
                free(node);
                *hptr=NULL;
        }
        else{
                if(node->roll==n){
                        *hptr=node->next;
                        free(node);
                }
                else{
                        node=node->next;
                        prev=*hptr;
                        while(node){
                                if(node->roll!=n){
                                        node=node->next;
                                        prev=prev->next;
                                }
                                else{
                                        prev->next=node->next;
                                        free(node);
printf("deleted");
break;
                                }
                        }
if(node==NULL)
printf("not detected");
                }
        }


}
