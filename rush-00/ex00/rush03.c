void	ft_putchar(char c);

void	first_last_line(int x)
{
	int	compteur;

	compteur = 0;
	while (compteur < x)
	{
		if (compteur == 0)
		{
			ft_putchar('A');
		}
		else if (compteur == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		compteur++;
	}
}

void	body_line(int x)
{
	int	compteur;

	compteur = 0;
	while (compteur < x)
	{
		if (compteur == 0)
		{
			ft_putchar('B');
		}
		else if (compteur == x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		compteur++;
	}
}

void	rush(int x, int y)
{
	int	compteur;

	if (x <= 0 || y <= 0)
		return ;
	compteur = 0;
	if (compteur == 0)
	{
		first_last_line(x);
		compteur++;
		ft_putchar('\n');
	}
	while (compteur > 0 && compteur < y - 1)
	{
		body_line(x);
		compteur++;
		ft_putchar('\n');
	}
	if (compteur == y - 1)
	{
		first_last_line(x);
		compteur++;
		ft_putchar('\n');
	}
}
