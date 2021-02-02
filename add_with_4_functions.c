//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int n1();
int n2();
int sum(int, int);

void main()
{
	int N1=n1();
	int N2=n2();
	int s=sum(N1, N2);
	printf("The sum of the numbers is, %d", s);
}
int n1()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	return a;
}
int n2()
{
	int b;
	printf("Enter another number:");
	scanf("%d", &b);
	return b;
}
int sum(int c, int d)
{
	int e=c+d;
	return e;
}
