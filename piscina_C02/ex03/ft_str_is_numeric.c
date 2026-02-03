#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= '0' && str[i] <= '9')))
		return(0);
		i++;
	}
		return(1);
}

int main(void)
{
	char *str = "platano";
	int n1 = ft_str_is_numeric(str);
	printf("%d\n", n1);
	char *str2 = "1234568";
	int n2 = ft_str_is_numeric(str2);
	printf("%d\n", n2);


}
