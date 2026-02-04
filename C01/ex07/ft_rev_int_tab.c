/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:52:57 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/26 13:34:40 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7};
	int	size;
	int	i;

	size = 7;
	ft_rev_int_tab(tab, size);
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
