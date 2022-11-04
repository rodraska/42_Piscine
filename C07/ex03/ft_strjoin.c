/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:55:41 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/27 10:28:34 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	m;

	k = 0;
	i = 0;
	while (i < size)
	{
		m = 0;
		while (strs[i][m++] != '\0')
			k++;
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		m = 0;
		while (sep[m++] != '\0')
			k++;
		i++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*s;
	int		i;
	int		k;
	int		m;

	len = str_len(size, strs, sep);
	s = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	k = 0;
	while (i < size)
	{
		m = 0;
		while (strs[i][m] != '\0')
			s[k++] = strs[i][m++];
		m = 0;
		while (sep[m] != '\0' && i != size - 1)
			s[k++] = sep[m++];
		i++;
	}
	s[k] = '\0';
	return (s);
}
/*
int	main(void)
{
	char	**strs;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = "hello";
	strs[1] = "ola";
	strs[2] = "hola";
	char	sep[] = ", ";
	//ft_strjoin(3, strs, sep);
	printf("%s\n", ft_strjoin(3, strs, sep));
	return (0);
}*/
