#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while(*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    char *str = "platano";
    ft_putstr(str);
}
