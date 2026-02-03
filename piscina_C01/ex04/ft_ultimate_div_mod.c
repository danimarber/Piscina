#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;


}

int main (void)
{
    int n1 = 10;
    int n2 = 5;
    int *p1 = &n1;
    int *p2 = &n2;

    printf("%d, %d\n", *p1, *p2);
    ft_ultimate_div_mod(p1, p2);
    printf("%d, %d", *p1, *p2);
}

