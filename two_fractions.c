#include<stdio.h>
typedef struct frac
{
	int n,d;
}frac;
frac input()
{
	frac f;
	printf("Enter numerator and denominator of first fraction: ");
	scanf("%d %d", &f.n,&f.d);
	return f; 
}
frac add(struct frac f,struct frac f1)
{
	frac sum={f.n*f1.d+f1.n*f.d, f.d*f1.d};
	return sum;
}
void display(struct frac sum)
{
	printf("The sum of the fractions is, %d/%d", sum.n,sum.d);
}
int main()
{
	frac f1,f2,sum;
	f1=input();
	f2=input();
	sum=add(f1,f2);
	display(sum);
	return 0;
}
