int	ft_strcmp(const char *s1, const char *s2)
{
	int	ans;

	ans = (int)*s1 - (int)*s2;
	if (!(*s1) || !(*s2))
		return (-1);
	while (*s1 == *s2 && ((*s1 != '\0') && (*s2 != '\0')))
	{
		s1++;
		s2++;
		ans = (int)(*s1) - (int)(*s2);
	}
	return (ans);
}
