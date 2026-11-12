#include "header.h"
void exitrecord(sll *hptr){
char ch;
printf("S/s save and exit\n E/e exit without saving\n");
scanf(" %c",&ch);
if(ch>='A' && ch<='Z')
ch=ch+32;
switch(ch){
case 's':saverecord(hptr);exit(0);
case 'e':exit(0);
default:printf("enter correct option\n");
}


}
