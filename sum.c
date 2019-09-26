#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter a,b,c values:");
	scanf("%d%d%d",&a,&b,&c);
	c=a+b+c;
	printf("\n The sum of three values are %d",c);
	getch();
}

