/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:38:57 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/31 16:05:45 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	ft_str_is_alpha("A12eeee134");
	ft_str_is_alpha("AzAzzzA");
	return (0);
}*/
