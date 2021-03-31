#include<stdio.h>
int input();
int calc(int);
int print(int);
int main()
{   int x,y;
    x=input();
    y=calc(x);
    print(y);
    
}
int input()
{
    int n;
    printf("enter total number of intergers\n");
    scanf("%d",&n);
    return n;
}
int calc(int n)
{
    int i,a[100],sum=0;
    printf("enter %d values", n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum + a[i];
	}
	
	return sum;

}
int print(int sum)
{
    printf("the sum is %d",sum);
}
