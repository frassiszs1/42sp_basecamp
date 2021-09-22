void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	comp;
	int	tmp;

	count = 0;
	while (count < size)
	{
		comp = count + 1;
		while (comp < size)
		{
			if (tab[count] > tab[comp])
			{
				tmp = tab[count];
				tab[count] = tab[comp];
				tab[comp] = tmp;
			}
			comp++;
		}
		count++;
	}
}
