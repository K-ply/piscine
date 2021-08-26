/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpauly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:45:03 by kpauly            #+#    #+#             */
/*   Updated: 2021/08/13 14:23:05 by kpauly           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (!(c == '7' && d == '8' && u == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = '0';
	d = '0';
	u = '0';
	while (c <= '9')
	{
		while (d <= '9')
		{
			while (u <= '9')
			{
				if (u > d && d > c)
				{
					ft_print(c, d, u);
				}
				u++;
			}
			u = '0';
			d++;
		}
		d = '0';
		c++;
	}
}
int main(void)
{
	ft_print_comb();
}

