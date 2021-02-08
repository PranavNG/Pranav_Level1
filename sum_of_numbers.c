//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
void main()
{
	int n,s=0;
	printf("Enter total number of values ");
	scanf("%d", &n);
	int arr[n];
	printf("enter %d numbers", n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		s=s+arr[i];
	}
	printf("Sum of the given %d numbers is %d", n,s);
}

