#include "header.h"
int main(){
        char ch;
        sll *hptr;
        //hptr=malloc(sizeof(sll*));
        hptr=NULL;
        while(1){
printf("student record\n");
                printf("a/A add new record\nd/D delete a record\ns/S show the lis\nm/M modify a record\n V/v save records\ne/E exit\nt/T sort the list \nl/L delete\n r/R reverse the list\n");
                scanf(" %c",&ch);
                if((ch>='A') && (ch<='Z'))
                        ch=ch+32;
                switch(ch){
                        case 'a':addrecord(&hptr);
                                 break;
case 'm':modify(hptr);break;
case 'v':saverecord(hptr);break;
case 'l':deleterecord(&hptr);break;
case 'r':reverse(&hptr);break;
case 't':sortrecord(&hptr);break;
                        case 's':showlist(hptr);break;
                        case 'e':exitrecord(hptr);break;
                        case 'd':delete(&hptr);break;
                }
                //if(ch=='e')
                //      break;
        }

}

