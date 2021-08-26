/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpauly <kpauly@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:11:55 by kpauly            #+#    #+#             */
/*   Updated: 2021/08/25 18:56:40 by kpauly           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		write(1, &lettre, 1);
		lettre++;
		write(1, " ", 1);
	}
		write(1, "\n", 1);
}	
int	main(void)
{
	ft_print_alphabet();
}
