#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'a' && str[i] <= 'z') ||(str[i] >= 'A' && str[i] <= 'Z')))
	return(0);
	i++;
	}
	return(1);
}

int main(void)
{
	char *str = "platano";
	int n1 = ft_str_is_alpha(str);
	printf("%d\n", n1);
	char *str2 = "plat no";
	int n2 = ft_str_is_alpha(str2);
	printf("%d\n", n2);


}
