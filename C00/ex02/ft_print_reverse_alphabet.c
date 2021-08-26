/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpauly <kpauly@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:46:14 by kpauly            #+#    #+#             */
/*   Updated: 2021/08/25 19:12:02 by kpauly           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include  <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	 lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		write(1, &lettre, 1);
		lettre--;
		write(1, " ", 1);
	}
		write(1, "\n", 1);
}


int	main(void)
{
	ft_print_reverse_alphabet();
}
