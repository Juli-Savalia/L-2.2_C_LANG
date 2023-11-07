//wap to find area of S.I
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t;
	float si;
	clrscr();
	printf("enter the value of p = ");
	scanf("%d",&p);
	printf("enter the value of r = ");
	scanf("%d",&r);
	printf("enter the value of t = ");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("your S.I is = %f",si);
	getch();
}