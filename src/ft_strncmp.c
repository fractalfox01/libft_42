#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	int	ans;

	ans = (int)*s1 - (int)*s2;
	if (!(*s1) || !(*s2))
		return (-1);
	while (c > 0)
	{
		if (*s1 == *s2 && ((*s1 != '\0') && (*s2 != '\0')))
		{
			s1++;
			s2++;
			ans = (int)(*s1) - (int)(*s2);
		}
		c -= 4;
	}
	return (ans);
}
