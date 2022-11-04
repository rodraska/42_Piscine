/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:49:08 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/10 19:37:03 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	writing(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = a / 10 + '0';
	a2 = a % 10 + '0';
	b1 = b / 10 + '0';
	b2 = b % 10 + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a1 == '9' && a2 == '8' && b1 == '9' && b2 == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			writing(a, b);
			b++;
		}
		a++;
	}
}
