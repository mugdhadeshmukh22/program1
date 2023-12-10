// implimentation of liked list
//header files
#include<stdio.h>
#include<conio.h>
#define maxsize 6
// main function
void main()
{
// declaration
int i,a[maxsize]={27,56,7,17,36,98};
clrscr();
printf("\n implementation of linkd list is as follows:\n");
// for loop to print linked list
for(i=0;i<=maxsize-1;i++)
{
printf(" %d",a[i]);
}
getch();
}