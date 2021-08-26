/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpauly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 09:29:53 by kpauly            #+#    #+#             */
/*   Updated: 2021/08/25 20:46:24 by kpauly           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int ad1;
	int ad2;
	int *ptr1;
	int *ptr2;

	ad1 = 9;
	ad2 = 10;
	ptr1 = &ad1;
	ptr2 = &ad2;
	ft_swap(ptr1, ptr2);
	printf("%d\n%d\n", ad1, ad2);
}
