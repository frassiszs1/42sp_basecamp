int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 32)
			count++;
		else
			return (0);
	}
	return (1);
}
