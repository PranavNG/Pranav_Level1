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
frac add(struct frac f,struct frac f1, int GCD)
{
	frac sum={(f.n*f1.d+f1.n*f.d)/GCD, (f.d*f1.d)/GCD};
	
	return sum;
}
void display(struct frac sum)
{
	printf("The sum of the fractions is, %d/%d", sum.n,sum.d);
}
int gcd(int x, int y)
{
    if (y == 0) {
        return x;
    }
 
    return gcd(y, x % y);
}
int main()
{
	frac f1,f2,sum;
	f1=input();
	f2=input();
	int GCD= gcd(f1.d,f2.d);
	sum=add(f1,f2,GCD);
	display(sum);
	return 0;
}
