#include <unistd.h>

void	ft_putchar (char n1, char n2, char n3)
{
	write (1, &n1, 1);
	write (1, &n2, 1);
	write (1, &n3, 1);
	if (n1 == '7' && n2 == '8' && n3 == '9')
		return ;
	else
		write (1, ", ", 2);
}

void	ft_print_comb (void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_putchar (n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
