/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:58:29 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/21 13:41:05 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	num;
	int	i;

	num = nb;
	i = power - 1;
	while (i > 0)
	{
		num = num * ft_recursive_power(num, power - 1);
		break ;
	}
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (num);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(0,0));
	return (0);
}*/
