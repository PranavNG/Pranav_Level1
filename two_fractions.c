#include<stdio.h>
struct Frac{
	int n,d;
};
struct Frac input()
{
	struct Frac f;
	printf("Enter numerator ");
	scanf("%d",&f.n);
	printf("Enter denominator ");
	scanf("%d",&f.d);
	return f;
}
int GCD(int x, int y)
{
	if(y==0)
		return x;
	return GCD(y,x%y);
}
struct Frac add(struct Frac f1,struct Frac f2)
{
    struct Frac temp;
	temp.d=(f1.d*f2.d);
	temp.n= (f1.n * f2.d) + (f2.n * f1.d); 
	int gcd=GCD(temp.n,temp.d);
	temp.n/=gcd;
	temp.d/=gcd;
	return temp;
}
void display(struct Frac sum)
{
	printf("the sum of fractions is %d/%d", sum.n,sum.d);
}
int main()
{
	int nf;
	struct Frac sum;
	sum.n=0;
	sum.d=1;
	printf("Enter number of fractions: ");
	scanf("%d",&nf);
	struct Frac f[nf];
	for(int i=0;i<nf;i++)
	{
		f[i]=input();
	}
	for(int i=0;i<nf;i++)
	{
		sum=add(f[i],sum);
	}
	display(sum);
	return 0;
}
