//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
	input();
	return 0;
}
void input()
{
	int n;
	printf("Enter total number of values ");
	scanf("%d", &n);
	int arr[n];
	printf("enter %d numbers", n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	cal(n,arr);
}
void cal(int n, int arr[])
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s+arr[i];
	}
	display(s,n);
}
void display(int s,int n)
{
	printf("Sum of the given %d numbers is %d", n,s);
}
