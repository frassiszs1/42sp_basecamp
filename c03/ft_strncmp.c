int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	unsigned char	a;
	unsigned char	b;

	count = 0;
	if (n == 0)
		return (0);
	if (n > 0)
	{
		while (s1[count] != '\0' && s2[count] != '\0' && count < n - 1)
		{
			if (s1[count] == s2[count])
				count++;
			else if (s1[count] != s2[count])
				return ((a = s1[count]) - (b = s2[count]));
		}
	}
	return ((a = s1[count]) - (b = s2[count]));
}
