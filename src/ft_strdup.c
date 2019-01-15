#include <stdlib.h>

int ft_strlen(char *str);

char	*ft_strdup(const char *s)
{
	char	*nstr;
	int	len;
	int	i;

	len = ft_strlen((char *)s);
	nstr = (char *)malloc(sizeof(char) * (len));
	i = 0;
	while (i < len)
	{
		nstr[i] = s[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
