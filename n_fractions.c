#include<stdio.h>
struct Frac{
	int n,d;
};
int number_of_frac()
{
    int nf;
    printf("Enter number of fractions: ");
	scanf("%d",&nf);
	return nf;
}
struct Frac input()
{
    struct Frac f;
	printf("Enter numerator ");
	scanf("%d",&f.n);
	printf("Enter denominator ");
	scanf("%d",&f.d);
	return f;
}
void input_n_fractions(int n, struct Frac array[n])
{
    for(int i=0;i<n;i++)
    {
        array[i]=input();
    }
}
int GCD(int x, int y)
{
	if(y==0)
		return x;
	return GCD(y,x%y);
}
struct Frac compute(struct Frac f1,struct Frac f2)
{
    struct Frac temp;
	temp.d=(f1.d*f2.d);
	temp.n= (f1.n * f2.d) + (f2.n * f1.d); 
	int gcd=GCD(temp.n,temp.d);
	temp.n/=gcd;
	temp.d/=gcd;
	return temp;
} 
struct Frac compute_n_fractions(int n, struct Frac array[n])
{
    struct Frac sum;
    sum.n=0;
    sum.d=1;
    for(int i=0;i<n;i++)
	{
	    sum=add(sum,array[i]);
	}
	return sum;
}
void display(int n, struct Frac lf[n],struct Frac sum)
{
    
    printf("The sum of fractions ");
    for(int i=0;i<n;i++)
    {
        printf("%d/%d, ",lf[i].n,lf[i].d);
    }
    
    printf(" is %d/%d", sum.n, sum.d);
}
int main()
{
	int nf=number_of_frac();
	struct Frac f[nf];
	input_n_fractions(nf,f);
	struct Frac f_sum;
	f_sum=compute_n_fractions(nf,f);
	display(nf,f,f_sum);
	return 0;
}
