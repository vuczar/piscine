# include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	char	c;
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	ft_putchar(c);
}
/*
int		main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	return (0);
}
*/
/*
• Escreva uma função que mostre um número passado como parâmetro. A função
deverá ser capaz de representar a totalidade dos valores possíveis em uma variável
do tipo int.

• Ela deve ser prototipada da seguinte maneira:
	void ft_putnbr(int nb);

• Por exemplo:
	◦ ft_putnbr(42) mostra "42".
*/