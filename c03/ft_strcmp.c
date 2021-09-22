int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;
	unsigned char	a;
	unsigned char	b;

	count = 0;
	while (s1[count] != '\0' && s1[count] == s2[count])
		count++;
	return ((a = s1[count]) - (b = s2[count]));
}
