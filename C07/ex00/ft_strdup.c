/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:04:18 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/27 10:07:51 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{	
	int		i;
	char	*a;

	i = 0;
	a = (char *)malloc(sizeof(char) * (str_len(src) + 1));
	if (!a)
		return (NULL);
	while (src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = 0;
	return (a);
}
/*
int	main(void)
{
	char src[] = "hello";
	char 	*a;
	a = ft_strdup(src);
	printf("%s\n", a);
	free(a);
	return (0);
}*/
