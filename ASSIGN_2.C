#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void main()
{       int i,j;
	clrscr();
	printf("Enter two numbers.\n ");
	scanf("%d%d",&i,&j);
	printf("a=%d\nb=%d\n",i,j);
	swap(&i,&j);
	printf("After swapping 2 numbers:\na=%d\nb=%d",i,j);
	getch();
}
