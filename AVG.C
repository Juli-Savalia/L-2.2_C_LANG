//wap to find avg of 8 no.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8;
	float avg;
	clrscr();
	printf("enter the value of n1 = ");
	scanf("%d",&n1);
	printf("enter the value of n2 = ");
	scanf("%d",&n2);
	printf("enter the value of n3 = ");
	scanf("%d",&n3);
	printf("enter the value of n4 = ");
	scanf("%d",&n4);
	printf("enter the value of n5 = ");
	scanf("%d",&n5);
	printf("enter the value of n6 = ");
	scanf("%d",&n6);
	printf("enter the value of n7 = ");
	scanf("%d",&n7);
	printf("enter the value of n8 = ");
	scanf("%d",&n8);
	avg=n1+n2+n3+n4+n5+n6+n7+n8/8;
	printf("your AVG is = %f",avg);
	getch();
}