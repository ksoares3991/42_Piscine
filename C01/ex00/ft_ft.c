/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:18:01 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/21 19:05:37 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
/*#include <unistd.h>*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int		n;
	char	tensplace;
	char	deciplace;

	n = 10;
	ft_ft(&n);
		tensplace = (n / 10) + 48;
		deciplace = (n % 10) + 48;
	write(1, &tensplace, 1);
	write(1, &deciplace, 1);
	write(1, &"\n", 1);
	printf("%i", n);
	return (0);
}*/
