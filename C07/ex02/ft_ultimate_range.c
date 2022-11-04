/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:26:15 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/27 10:29:34 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	if (min >= max)
		return (0);
	a = (int *)malloc(sizeof(int) * (max - min));
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
/*
int	main(void)
{
	int min = -2;
	int max = -3;
	int range;
	int *range1 = &range;
	int **range2 = &range1;
	printf("%d\n", ft_ultimate_range(range2, min, max));
	return (0);
}*/
