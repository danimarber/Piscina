#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(*str != 0)
    {
    i++;
    *str++;
    }
    return(i);
}

int main(void)
{
    char *str;
    str = "platano";
    int len;

    len = ft_strlen(str);
    printf("%d", len);
}

