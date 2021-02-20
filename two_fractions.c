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
int GCD(int x, int y)
{
    if (y == 0) {
        return x;
    }
 
    return GCD(y, x % y);
}
frac add(struct frac f1,struct frac f2)
{
	int gcd= GCD(f1.d,f2.d);
	frac sum={(f1.n*f2.d+f2.n*f1.d)/gcd, (f1.d*f2.d)/gcd};
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
