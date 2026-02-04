/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:40:21 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/28 00:14:48 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Defining fuction to print a single character */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Defining function to print if number is negative or positive */
void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
		ft_putchar(neg);
	else
		ft_putchar(pos);
}

/*Defining main function to run program
int	main(void)
{
	ft_is_negative(10);
	write(1, "\n", 1);
	ft_is_negative(-10);
	return (0);
}*/
