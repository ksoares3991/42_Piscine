/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:43:54 by kasoares          #+#    #+#             */
/*   Updated: 2026/01/31 19:57:05 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
	{
		count++;
	}
	if (size == 0)
		return (count);
	while (src[i] && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

/*int	main(void)
{
	char	src[] = "Hello";
	char	dest[5];

	ft_strlcpy(dest, src, 5);
	return (0);
}*/
