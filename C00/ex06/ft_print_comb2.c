/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpauly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:45:03 by kpauly            #+#    #+#             */
/*   Updated: 2021/08/25 19:49:16 by kpauly           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nom)
{
	write(1, &nom, 1);
}

void	ft_putnumber(int nb1)

{
	int	dec1;
	int	dec2;

	if (nb1 <= 9)
	{
		ft_putchar('0');
		ft_putchar(nb1 + 48);
	}
	else
	{
		dec1 = nb1 / 10;
		dec2 = nb1 % 10;
		ft_putchar(dec1 + 48);
		ft_putchar(dec2 + 48);
	}
}

void	ft_multi(int nb1, int nb2)

{
	ft_putnumber(nb1);
	ft_putchar(' ');
	ft_putnumber(nb2);
	if (nb1 < 98 || nb2 < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	nb2 = 0;
	while (nb1 <= 98)
	{
		while (nb2 <= 99)
		{
			if (nb2 > nb1)
			{				
				ft_multi(nb1, nb2);
			}
			nb2++;
		}
		nb1++;
		nb2 = 0;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}

