// selection sort
//Header files
#include<stdio.h>
#include<conio.h>
// main function
void main()
{
	//Declaration
	int a[6]={56,23,12,20,5,15};
	int i,j,swap,min;
	int n=6;
	clrscr();
	printf("\nunsorted array list is:");
	// printing unsorted array
	for(i=0;i<6;i++)
	{
	printf("\t%d",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	  int min=i;
	  for(j=i+1;j<n;j++)
	  {
	  if(a[j]<a[min])
	  {
	  min=j;
	  }
	  }
	  if(min!=i)
	  {
	  swap=a[i];
	  a[i]=a[min];
	  a[min]=swap;
	  }
	}
	  //printing sorted array
	  printf("\n sorted list is");
	  for(i=0;i<n;i++)
	  {
	   printf("\t%d",a[i]);
	   }
	   getch();
	   }