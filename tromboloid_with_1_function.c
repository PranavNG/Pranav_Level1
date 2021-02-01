//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
	float h,d,b,v;
	scanf("%f %f %f", &h,&d,&b);
	v=(h*d*b)/3+(d/b);
	printf("Area of tromboloid is %f", v);
	return 0;
}
