/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:33:08 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/21 21:00:09 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	place1;
	int	place2;
	int	*a;
	int	*b;

	place1 = 10;
	place2 = 20;
	a = &place1;
	b = &place2;
	ft_swap(a, b);
	printf("Novo Valor de A: %d \n", *a);
	printf("Novo Valor de B: %i \n", *b);
}*/
