/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:34:59 by kasoares          #+#    #+#             */
/*   Updated: 2026/02/04 15:29:46 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *argv)
{
	int	j;

	j = 0;
	while (argv[j])
	{
		write(1, &argv[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{	
	if (argc > 0)
	{
		ft_putstr(argv[0]);
	}
	write(1, "\n", 1);
	return (0);
}
