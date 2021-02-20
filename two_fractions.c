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
	int f_den=(f1.d*f2.d)/gcd;
	int f_num = (f1.n)*(f_den/f1.d) + (f2.n)*(f_den/f2.d); 
	frac sum={f_num,f_den};
	int new_gcd=GCD(sum.n,sum.d);
	frac f_sum={f_num/new_gcd, f_den/new_gcd};
	return f_sum;
}
void display(struct frac f_sum)
{
	printf("The sum of the fractions is, %d/%d", f_sum.n,f_sum.d);
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
