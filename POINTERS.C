#include<stdio.h>
#include<conio.h>
int a=90;
int *p=&a;
void main()

{

       clrscr();
       printf("\nthe value of p pointer is : %d",*p);
       printf("\n address of p pointer is : %p",p);
       getch();
}