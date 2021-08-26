/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpauly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:19:51 by kpauly            #+#    #+#             */
/*   Updated: 2021/08/17 12:20:18 by kpauly           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_abc_min(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] += 32;
		j++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_abc_min(str);
	i = 0;
	while (str[i] != '\0')
	{		
		if (str[0] >= 'a' && str[0] <= 'z' && i == 0)
		{
			str[0] -= 32;
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
