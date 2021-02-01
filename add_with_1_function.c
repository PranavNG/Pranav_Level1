//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
	int n1,n2,s;
	scanf("%d %d", &n1,&n2);
	s=n1+n2;
	printf("%d + %d = %d",n1,n2,s);
	return 0;
}
