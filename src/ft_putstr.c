#include "../include/libft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
		i++;
	}
}
