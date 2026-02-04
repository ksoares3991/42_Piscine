/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:14:11 by kasoares          #+#    #+#             */
/*   Updated: 2026/02/03 16:01:17 by kasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = 0;
	slen = 0;
	while (src[slen])
	{
		slen++;
	}
	while (dlen < size && dest[dlen])
	{
		dlen++;
	}
	if (size <= dlen)
		return (size + slen);
	while (src[i] && (dlen + i + 1) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
