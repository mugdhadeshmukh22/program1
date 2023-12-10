//implemention of queue
//header file
#include<stdio.h>
#include<conio.h>
#define maxsize 6
// main function
void main()
{
	//declaration
	int i,a[maxsize]={27,56,7,17,36,98};
	clrscr();
	printf("\n implemention of queue is as follows:\n");
	// for loop to printf queue elements
	for(i=0;i<=maxsize-1;i++)
	{
	printf("  %d",a[i]);
	}
	getch();
	}