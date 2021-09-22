void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	tmp;

	count = 0;
	while (count < size)
	{
		tmp = tab[count];
		tab[count] = tab[size - 1];
		tab[size - 1] = tmp;
		count++;
		size--;
	}
}
