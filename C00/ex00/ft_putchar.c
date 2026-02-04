/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 21:46:35 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/28 00:11:28 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Including Unix standard library to enable write function usage*/
#include <unistd.h>

/* Defining function to print a character from parameter c*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Defining main to run program
int	main(void)
{
	char	c;

	c = 'Z';
	ft_putchar(c);
	return (0);
}*/
