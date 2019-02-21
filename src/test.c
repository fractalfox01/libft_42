#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/libft.h"

int	main(void)
{
	char	*string = "   this is a sample string      split       this for   me  !       ";
	char	str1[] = "split  ||this|for|me|||||!|";
	char	str2[] = "  \tthis \t is\n  a \nsample\nstring\n\t ";
	char	str3[] = "  \t \t \nt   \n\n\n\t ";
	char	str4[] = "  \t \t \nthisis a sample string\v   \n\n\n\t ";
	char	str5[] = "  \tthis is a sample string \t \n   \n\n\n\t ";
	char	str6[] = "split this for   me !";
	char	*s = "olol                     ";
	char	str7[] = "split";
	char	str[] = "  \t \t \n   \n\n\n\t ";
	int		nbr1 = 42;
	int		nbr2 = -255;
	int		wc;
	char 	**ptr;
	char	**ptr1;
	char	**ptr2;
	char	**p;
	int		i;
	int		j;

	printf("%s\n", ft_itoa(nbr1));
	printf("%s\n", ft_itoa(nbr2));
/*	printf("word count: %d\n", ft_wordcount(s, ' '));
	printf("word count: %d\n", ft_wordcount(str2, '\n'));
	printf("word count: %d\n", ft_wordcount(str1, '|'));
	printf("word count: %d\n", ft_wordcount(string, ' '));
*/
/*	i = 0;
	printf("Original: |%s|\n", string);
	printf("===============================================\n");
	wc = ft_wordcount(string, ' ');
	printf("= %d\n", wc);
	p = ft_strsplit(string, ' ');
	while (p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
	free(p);
*/
	return (0);
}
