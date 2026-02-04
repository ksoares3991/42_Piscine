/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:50:47 by kasoares          #+#    #+#             */
/*   Updated: 2026/02/02 14:57:52 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[9] = "Hello";
	char	src[] = ", 42!";

	ft_strcat(dest, src);
	printf("src: %s \n", src);
	printf("dest: %s \n", dest);
	return (0);
	}*/
