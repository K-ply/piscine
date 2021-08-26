/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaouak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 06:37:03 by azaouak           #+#    #+#             */
/*   Updated: 2021/08/15 23:32:13 by azaouak          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_values(int tab[4][4], int *values);

int	find_zero(int tab[4][4], int *row, int *col)
{
	*row = 0;
	while (*row <= 3)
	{
		*col = 0;
		while (*col <= 3)
		{
			if (!(tab[*row][*col]))
				return (0);
			*col += 1;
		}
		*row += 1;
	}
	return (1);
}

int	check_col(int tab[4][4], int col, int n)
{
	int	row;

	row = 0;
	while (row <= 3)
	{
		if (tab[row][col] == n)
			return (0);
		row++;
	}
	return (1);
}

int	check_row(int tab[4][4], int row, int n)
{
	int	col;

	col = 0;
	while (col <= 3)
	{
		if (tab[row][col] == n)
			return (0);
		col++;
	}
	return (1);
}

int	check_clone(int tab[4][4], int row, int col, int n)
{
	if ((check_row(tab, row, n)) && (check_col(tab, col, n))
		&& (!(tab[row][col])))
		return (1);
	return (0);
}

int	gen(int tab[4][4], int *values)
{
	int	i;
	int	n;
	int	row;
	int	col;

	i = 0;
	if (find_zero(tab, &row, &col) && (check_values(tab, values)))
		return (1);
	n = 1;
	while (n <= 4)
	{
		if (check_clone(tab, row, col, n))
		{
			tab[row][col] = n;
			if (gen(tab, values))
				return (1);
			tab[row][col] = 0;
		}
		n++;
	}
	return (0);
}
