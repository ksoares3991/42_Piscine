/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <kasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 22:02:17 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/28 00:12:17 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Defining function to print a unique character from a parameter c
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//Defining function that print the alphabet, lower case, from 'a' to 'z'
void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

/*
//Defining main function to run program
/int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
