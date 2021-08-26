/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaouak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 06:35:09 by azaouak           #+#    #+#             */
/*   Updated: 2021/08/15 23:32:47 by azaouak          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	col_up(int tab[4][4], int value, int col)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 1;
	tmp = tab[0][col];
	while (i <= 3)
	{
		if (tab[i][col] > tmp)
		{
			tmp = tab[i][col];
			j++;
		}
		i++;
	}
	if (j == value)
		return (0);
	return (1);
}

int	col_down(int tab[4][4], int value, int col)
{
	int	i;
	int	j;
	int	tmp;

	i = 2;
	j = 1;
	tmp = tab[3][col];
	while (i >= 0)
	{
		if (tab[i][col] > tmp)
		{
			tmp = tab[i][col];
			j++;
		}
		i--;
	}
	if (j == value)
		return (0);
	return (1);
}

int	row_left(int tab[4][4], int value, int row)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 1;
	tmp = tab[row][0];
	while (i <= 3)
	{
		if (tab[row][i] > tmp)
		{
			tmp = tab[row][i];
			j++;
		}
		i++;
	}
	if (j == value)
		return (0);
	return (1);
}

int	row_right(int tab[4][4], int value, int row)
{
	int	i;
	int	j;
	int	tmp;

	i = 2;
	j = 1;
	tmp = tab[row][3];
	while (i >= 0)
	{
		if (tab[row][i] > tmp)
		{
			tmp = tab[row][i];
			j++;
		}
		i--;
	}
	if (j == value)
		return (0);
	return (1);
}

int	check_values(int tab[4][4], int *values)
{
	int	i;

	i = 0;
	while (values[i])
	{
		if (i >= 0 && i <= 3)
			if (col_up(tab, values[i], i))
				return (0);
		if (i >= 4 && i <= 7)
			if (col_down(tab, values[i], i - 4))
				return (0);
		if (i >= 8 && i <= 11)
			if (row_left(tab, values[i], i - 8))
				return (0);
		if (i >= 12 && i <= 15)
			if (row_right(tab, values[i], i - 12))
				return (0);
		i++;
	}
	return (1);
}
