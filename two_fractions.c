#include<stdio.h>
typedef struct frac
{
	int n,d;
}frac;
int main()
{
	int n1,n2,d1,d2;
	printf("Enter numerator and denominator of first fraction: ");
	scanf("%d %d", &n1,&d1);
	printf("Enter numerator and denominator of second fraction: ");
	scanf("%d %d", &n2,&d2);
	frac f={n1,d1};
	frac f1={n2,d2};
	add(f,f1);
}
void add(frac f, frac f1)
{
	frac sum={f.n*f1.d+f1.n*f.d, f.d*f1.d};
	printf("Sum is equal to: %d/%d", sum.n,sum.d);
}
