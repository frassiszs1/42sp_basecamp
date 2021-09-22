int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65 && str[c] <= 90) || (str[c] >= 97 && str[c] <= 122))
			c++;
		else
			return (0);
	}
	return (1);
}
