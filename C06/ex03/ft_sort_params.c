/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:42:30 by kasoares          #+#    #+#             */
/*   Updated: 2026/02/05 15:09:20 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	j;

	j = 0;
	while (s1[j] == s2[j] && s1[j])
	{
		j++;
	}
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}

void	ft_putstr(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		write(1, &str[k], 1);
		k++;
	}
}

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		changed;
	char	*temp;

	changed = 1;
	while (argc > 1 && changed)
	{
		changed = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				changed = 1;
			}
			i++;
		}
	}
	if (argc > 1)
		ft_print_params(argc, argv);
	return (0);
}
