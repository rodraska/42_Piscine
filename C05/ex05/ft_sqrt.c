/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:19:05 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/24 13:37:58 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	num;
	long int	i;	

	num = (long)nb;
	i = 0;
	if (num == 0 || num == 1)
		return (num);
	else if (num > 1)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return ((int)i);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(36));
	return (0);
}*/
