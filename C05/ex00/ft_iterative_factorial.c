/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:08:08 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/21 13:34:07 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = nb - 1;
	num = nb;
	while (i > 0)
	{
		num = num * i;
		i--;
	}
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (num);
}
/*
int	main(void)
{
	int	a = 0;
	printf("%d\n", ft_iterative_factorial(a));
	return (0);
}*/
