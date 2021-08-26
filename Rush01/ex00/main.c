/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaouak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 06:30:33 by azaouak           #+#    #+#             */
/*   Updated: 2021/08/15 23:32:32 by azaouak          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		gen(int tab[4][4], int *values);
void	out(int tab[4][4]);

int	start_tab(int *values)
{
	int	row;
	int	col;
	int	tab[4][4];

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			tab[row][col] = 0;
			col++;
		}
		row++;
	}
	if (gen (tab, values))
		out (tab);
	else
		write(1, "Error\n", 6);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	out(int tab[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			ft_putchar(tab[row][col] + '0');
			if (col == 3)
				col++;
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	check_flags_value(char *arg, int *values)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i])
	{
		if (arg[0] == ' ' || (arg[31] == ' '))
			return (0);
		if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
				|| (!((arg[i + 1])) && (arg[i - 1] == ' '))))
		{
			values[j] = (arg[i] - '0');
			j++;
			i++;
		}
		if (arg[i] == 32 && ((arg[i - 1] >= '1' && arg[i - 1] <= '4')
				&& (arg[i + 1] >= '1' && arg[i + 1] <= '4')))
			i++;
		else
			return (j);
	}
	return (j);
}

int	main(int argc, char **argv)
{
	int	values[16];
	int	i;

	i = 0;
	if (argc == 2)
	{
		i = check_flags_value(argv[1], values);
		if (i == 16)
			start_tab(values);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
