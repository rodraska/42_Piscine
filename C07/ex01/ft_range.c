/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:32:08 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/27 10:12:23 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	if (min >= max)
		return (0);
	a = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
/*
int	main(void)
{	
	int	*c;
	c = ft_range(0,5);
	int i;
	i = 0;
	while(i < 5)
	{
		printf("%d\n", c[i]);
		i++;
	}
	free(c);
	return (0);
}*/
