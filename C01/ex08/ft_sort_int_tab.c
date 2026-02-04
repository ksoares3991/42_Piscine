/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:35:04 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/26 18:35:24 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	c;

	c = 0;
	while (c <= size)
	//while (c < size -1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		c++;
	}
}

int	main(void)
{
	int	tab[] = {3, 7, 2, 9, 1, 0, 4};
	int	size;
	int	i;

	size = 7;
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
		i++;
	}
	return (0);
}
