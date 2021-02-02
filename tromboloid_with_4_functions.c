//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float h();
float b();
float d();

void main()
{
	float H=h();
	float B= b();
	float D=d();
	float vol=(H*D*B)/3+(D/B);
	printf("The volume of the tromboloid is: %f", vol);
}
float h()
{
	float a;
	printf("Enter the height: ");
	scanf("%f", &a);
	return a;
}
float b()
{
    float c;
    printf("Enter the breadth: ");
    scanf("%f", &c);
    return c;
}
float d()
{
    float e;
    printf("Enter the depth: ");
    scanf("%f", &e);
    return e;
}
