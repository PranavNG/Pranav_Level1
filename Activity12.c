// Activity 12
#include <stdio.h>

struct fraction
{
    int num, den;
};
typedef struct fraction frac;

struct egyfraction
{
    int nof;
    frac fractions[100];
    frac sum;
};
typedef struct egyfraction egfrac;

egfrac input_one()
{
    egfrac ef;
    scanf("%d", &ef.nof);

    for (int i = 0; i < ef.nof; i++)
    {
        ef.fractions[i].num = 1;
        scanf("%d", &ef.fractions[i].den);
    }

    return ef;
}

void input_n_fractions(int n, egfrac eFracs[n])
{
    for (int i = 0; i < n; i++)
        eFracs[i] = input_one();
}

int GCD(int a, int b)
{
    int div;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            div = i;
    }

    return div;
}

void compute_one_fraction(egfrac *eFrac)
{
    eFrac->sum.num = 0;
    eFrac->sum.den = 1;

    for (int i = 0; i < eFrac->nof; i++)
    {
        eFrac->sum.num = (eFrac->sum.num * eFrac->fractions[i].den) + (eFrac->fractions[i].num * eFrac->sum.den);
        eFrac->sum.den = eFrac->sum.den * eFrac->fractions[i].den;
    }

    int d = GCD(eFrac->sum.num, eFrac->sum.den);

    eFrac->sum.num /= d;
    eFrac->sum.den /= d;
}

void compute_n_fracs(int n, egfrac eFracs[n])
{
    for (int i = 0; i < n; i++)
        compute_one_fraction(&eFracs[i]);
}

void output_one(egfrac eFraction)
{
    for (int i = 0; i < eFraction.nof-1; i++)
    {
    	printf("%d/%d + ",eFraction.fractions[i].num,eFraction.fractions[i].den);
    }
    printf("%d/%d = %d/%d\n", eFraction.fractions[eFraction.nof-1].num, eFraction.fractions[eFraction.nof-1].den, eFraction.sum.num, eFraction.sum.den);
}

void output_n_fracs(int n, egfrac eFractions[n])
{
    for (int i = 0; i < n; i++)
        output_one(eFractions[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    egfrac eFractions[n];
    input_n_fractions(n, eFractions);
    compute_n_fracs(n, eFractions);
    output_n_fracs(n, eFractions);

    return 0;
}
