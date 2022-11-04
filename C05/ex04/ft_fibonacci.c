/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:15:06 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/21 13:42:31 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	num;

	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		num = index;
	else
		num = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (num);
}
/*
int	main(void)
{
	printf("%d\n", ft_fibonacci(9));
	return (0);
}*/
