//wap to find sum of 5 number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,n4,n5,sum;
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
	sum=n1+n2+n3+n4+n5;
	printf("your SUM is = %d",sum);
	getch();
}