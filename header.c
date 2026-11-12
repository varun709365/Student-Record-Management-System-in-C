#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct student{
int roll;
char name[20];
float percen;
struct student *next;
}sll;
void showlist(sll *hptr);
void addrecord(sll **hptr);
void roldelete(sll **hptr);
void delete(sll **hptr);
void namedelete(sll **hptr);
void rmodify(sll *hptr);
void modify(sll *hptr);
void pmodify(sll *hptr);
void nmodify(sll *hptr);
void saverecord(sll *hptr);
void deleterecord(sll **hptr);
void reverse(sll **hptr);
void sortrecord(sll **hptr);
void percensort(sll **hptr);
void exitrecord(sll *hptr);

