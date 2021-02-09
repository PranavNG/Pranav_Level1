//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
void input();
void calc(float, float ,float ,float);
void display(float);
struct points
{
	int x1,y1,x2,y2;
};
int main()
{
input();
	return 0;
}
void input()
{
	struct points p;
	printf("Enter values of x1,y1: ");
	scanf("%d %d ", &p.x1,&p.y1);
	printf("enter values of x2,y2: ");
	scanf("%d %d", &p.x2,&p.y2);
	calc(p.x1,p.y1,p.x2,p.y2);
}
void calc(float a,float b,float c,float d)
{
	float dist=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	display(dist);
}
void display(float d)
{
	printf("The distance is %f", d);
}
