/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:57:49 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/24 19:06:21 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int		a;
	int		b;
	char	c;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	c = a + '0';
	printf("New value for A = (printf) %d \n ", a);
	write(1, "New value for A (write)", 23);
	write(1, &c, 1);
	c = b + '0';
	printf("New value for B = (printf) %d \n ", b);
	write(1, "New value for B (write)", 23);
	write(1, &c, 1);
	return (0);
}*/
