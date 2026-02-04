/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 00:16:36 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/28 20:59:04 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Defining function to write a single character*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Defining function to write 2 first digits and blank space*/
void	ft_print_numbers(int left, int right)
{
	ft_putchar((left / 10) + '0');
	ft_putchar((left % 10) + '0');
	ft_putchar(' ');
	ft_putchar((right / 10) + '0');
	ft_putchar((right % 10) + '0');
	if (left != 98 || right != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

/*Defining function to print comb of 2 distinct numbers with 2 digit each */
void	ft_print_comb2(void)
{
	int	left_num;
	int	right_num;

	left_num = 0;
	while (left_num <= 98)
	{
		right_num = left_num +1;
		while (right_num <= 99)
		{
			ft_print_numbers(left_num, right_num);
			right_num++;
		}
		left_num++;
	}
}

/*Defining main function to run the program
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
