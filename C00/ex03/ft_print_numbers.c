/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:29:09 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/28 00:14:03 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Defining function to write a single character given in the parameter*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Defining function to print numbers from '0' to '9', char by char*/
void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}

/*
Defining main function to run the program
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
