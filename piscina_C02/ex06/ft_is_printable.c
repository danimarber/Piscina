#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 32 && str[i] <= 126)))
	return(0);
	i++;
	}
	return(1);
}

int main(void)
{
	char *str = "platano";
	int n1 = ft_str_is_printable(str);
	printf("%d\n", n1);
	char *str2 = "PLATANO";
	int n2 = ft_str_is_printable(str2);
	printf("%d\n", n2);


}
