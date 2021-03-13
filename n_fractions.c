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
struct Frac add(struct Frac f1, struct Frac f2)
{
    struct Frac temp;
	temp.d=(f1.d*f2.d);
	temp.n= (f1.n * f2.d) + (f1.n * f2.d); 
    int gcd=GCD(temp.n,temp.d);
    temp.n/=gcd;
    temp.d/=gcd;
	return temp;
}
void add_n_fractions(int n, struct Frac arr[n])
{
    for(int i=0;i<n;i++)
	{
	    arr[i]=add(arr[i],arr[i+1]);
	}
}
void display(struct Frac sum)
{
	printf("%d/%d", sum.n,sum.d);
}
void display_n(int n,struct Frac arr[n])
{
    printf("the sum of fractions is ");
    for(int i=0;i<n;i++)
    {
        display(arr[n]);
    }
}
int main()
{
	int nf= number_of_frac();
	struct Frac f[nf];
	input_n_fractions(nf,f);
	add_n_fractions(nf,f);
	display_n(nf,f);
	return 0;
}
