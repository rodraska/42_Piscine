/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:54:44 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/21 13:39:10 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;
	int	i;

	num = 1;
	i = 0;
	while (i < power)
	{
		num = num * nb;
		i++;
	}
	if (power < 0)
		return (0);
	else
		return (num);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(2,-3));
	return (0);
}*/
