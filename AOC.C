//wap to find area of circle
#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float pie,aoc;
	clrscr();
	printf("enter the value of r = ");
	scanf("%d",&r);
	printf("enter the value of pie = ");
	scanf("%f",&pie);
	aoc=pie*r*r;
	printf("your AOC is = %f",aoc);
	getch();
}
