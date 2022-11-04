/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:05:18 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/14 14:44:59 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = size - 1;
	j = 0;
	while (i >= size / 2)
	{
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		i--;
		j++;
	}
}
/*
int main(void)
{
	int	a[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(a, 5);
	printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
	return (0);
}*/
