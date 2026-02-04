/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:09:03 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/28 00:13:07 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Defining function to write a single character*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Defining function to print reverse alphabet, from 'z' to 'a'*/
void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}

/*Defining main function
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
