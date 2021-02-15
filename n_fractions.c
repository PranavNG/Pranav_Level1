//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction{
    int nu[100];
    int de[100];
}f;
void redform(int n, int nu[],int de[])
{
    int f_num = 0;
    int f_den = lcm(f.de, n);
    for (int i = 0; i < n; i++) {
        f_num = f_num+ (f.nu[i]) * (f_den/ f.de[i]);
    }
    printf("The answer is %d/%d", f_num,f_den);
}
int lcm(int arra[], int n)
{
    int a = arra[0];
    for (int i = 1; i < n; i++) {
        a = ((arra[i] * a)/ gcd(arra[i], a));
    }
    return a;
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
    int n;
    printf("Enter number of fractions: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        printf("Enter numerator of %d fraction", (i+1));
        scanf("%d", &f.nu[i]);
        printf("Enter denominator of %d fraction", (i+1));
        scanf("%d", &f.de[i]);
    }
    redform(n, f.nu, f.de);
    return 0;
}
