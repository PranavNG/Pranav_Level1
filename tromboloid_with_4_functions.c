//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input();
float compute(float,float,float);
void display(float);

void main()
{
	float h,d,b,a;
	printf("Enter height: ");
	h=input();
	printf("Enter depth: ");
	d=input();
	printf("Enter breadth: ");
	b=input();
	a=compute(h,b,d);
	display(a);
}
float input()
{
	float x;
	scanf("%f", &x);
	return x;
}
float compute(float H, float B, float D)
{
float area=(H*B*D)/3+(D/B);
	return area;
}
void display(float a)
{
	printf("Area of tromboloid is: %f", a);
}

