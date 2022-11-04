/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:31:12 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/14 10:39:24 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int*mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main(void)
{
	int c = 0;
	int d = 0;
	int *div = &c;
	int *mod = &d;

	ft_div_mod(13, 5, div, mod);
	printf("%d, %d\n", *div, *mod);
	return (0);
}*/
