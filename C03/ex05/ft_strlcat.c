/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:18:19 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/20 15:54:45 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	l;
	unsigned int	k;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	l = 0;
	k = len_dest;
	if (size <= len_dest)
		return (size + len_src);
	while (src[l] != '\0' && k + 1 < size)
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (len_dest + len_src);
}
