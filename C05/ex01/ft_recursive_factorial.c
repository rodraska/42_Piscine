/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:48:51 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/21 13:36:03 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	num;
	int	i;

	num = nb;
	i = nb - 1;
	while (i > 0)
	{
		num = num * ft_recursive_factorial(num - 1);
		break ;
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
	printf("%d\n", ft_recursive_factorial(a));
	return (0);
}*/
