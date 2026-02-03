#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
	int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
        
    }
    dest[i] = '\0';
    return(dest);
}

int main(void)
{
    char src[] = "platano";
    char dest[20];
    printf("%s, %s\n", src, dest);
    ft_strcpy(dest, src);
    printf("%s, %s\n", src, dest);

}
