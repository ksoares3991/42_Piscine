/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <kasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 23:05:18 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/28 20:59:53 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Defining a function to write a single character*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Defining function to print ',' and ' ' if cent!=7, tens!=8 and deci!=9*/
void	ft_print_commas_blanks(char a, char b, char c)
{
	if (!(a == '7' && b == '8' && c == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

/*Defining function to print combinations of 3 distinct digits*/
void	ft_print_comb(void)
{
	int	cent;
	int	tens;
	int	deci;

	cent = '0';
	while (cent <= '7')
	{
		tens = cent + 1;
		while (tens <= '8')
		{
			deci = tens + 1;
			while (deci <= '9')
			{
				ft_putchar(cent);
				ft_putchar(tens);
				ft_putchar(deci);
				ft_print_commas_blanks(cent, tens, deci);
				deci++;
			}
			tens++;
		}
		cent++;
	}
}

/*Definin main function to run program
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
