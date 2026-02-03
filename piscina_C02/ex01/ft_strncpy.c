#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

int main(void)
{
	char src[] = "platano";
	char dest[20];
	int n = 10;
	printf("%s, %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("%s, %s\n", src, dest);

}
