#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;
        printf("%d, %d, %d, %d", a, b, *div, *mod);
}

int main(void)
{
    int n1 = 10;
    int n2 = 5;
    int *div;
    int *mod;

    ft_div_mod(n1, n2, div, mod);

}
