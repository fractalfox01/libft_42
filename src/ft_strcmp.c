#include "../include/libft.h"

int	ft_strcmp(char *s1, char *s2)
{
//	int	i;
//	int	nbr1;
//	int	nbr2;
//	int	len1;
//	int	len2;
	int	ans;

//	nbr1 = 0;
//	nbr2 = 0;
	ans = (int)*s1 - (int)*s2;
//	len1 = ft_strlen(s1);
//	len2 = ft_strlen(s2);
//	i = 0;
	if (!(*s1) || !(*s2))
		return (-1);
	while (*s1 == *s2 && ((*s1 != '\0') && (*s2 != '\0')))
	{
		s1++;
		s2++;
		ans = (int)(*s1) - (int)(*s2);
	}
//	while (i < len1)
//	{
//		if (i > 0)
//		{
//			if (s1[i - 1] != s1[i])
//				nbr1 += (int)(s1[i]);
//		}
//		else if (i == 0)
//			nbr1 += (int)(s1[i]);
//		i++;
//	}
//	i = 0;
//	while (i < len2)
//	{
//		if (i > 0)
//		{
//			if (s2[i - 1] != s2[i])
//				nbr2 += (int)(s2[i]);
//		}
//		else if (i == 0)
//			nbr2 += (int)(s2[i]);
//		i++;
//	}
	return (ans);
}
