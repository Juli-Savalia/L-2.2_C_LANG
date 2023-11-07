//wap to find area of triangle
#include<stdio.h>
#include<conio.h>
void main()
{
	int b,h;
	float aot;
	clrscr();
	printf("enter the value of breadth = ");
	scanf("%d",&b);
	printf("enter the value of height = ");
	scanf("%d",&h);
	aot=(b*h)/2;
	printf("your AOT is = %f",aot);
	getch();
}