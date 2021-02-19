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
	int gcd= GCD(f1.d,f2.d);
	frac sum={(f.n*f1.d+f1.n*f.d)/gcd, (f.d*f1.d)/gcd};
	
	return sum;
}
void display(struct frac sum)
{
	printf("The sum of the fractions is, %d/%d", sum.n,sum.d);
}
int GCD(int x, int y)
{
    if (y == 0) {
        return x;
    }
 
    return GCD(y, x % y);
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
