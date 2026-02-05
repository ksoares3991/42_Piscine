/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 00:24:04 by kasoares          #+#    #+#             */
/*   Updated: 2026/02/04 01:04:11 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	nb_converted;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	nb_converted = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb_converted = (nb_converted * 10) + (str[i] - 48);
		i++;
	}
	nb_converted *= sign;
	return (nb_converted);
}

/*int	main(void)
{
	printf("Primeiro numero: %d \n", ft_atoi("---+--+1234ab567"));
	printf("Segundo numero: %d \n", ft_atoi("0"));
	printf("Terceiro numero: %d \n", ft_atoi("-0"));
	printf("Quarto numero: %d \n", ft_atoi("-2147483648"));
	printf("Quinto numero: %d \n", ft_atoi("2147483647"));
	printf("Sexto numero: %d \n", ft_atoi("-2147483649"));
	printf("Setimo numero: %d \n", ft_atoi("2147483648"));
	return (0);
}*/
