/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 22:29:26 by kasoares          #+#    #+#             */
/*   Updated: 2026/02/05 16:21:10 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	lnb;
	char	temp;

	lnb = nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb = lnb * -1;
	}
	if (lnb >= 0 && lnb <= 9)
	{
		temp = lnb + 48;
		write(1, &temp, 1);
		return ;
	}
	else
	{
		ft_putnbr(lnb / 10);
		ft_putnbr(lnb % 10);
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	return (0);
}*/
