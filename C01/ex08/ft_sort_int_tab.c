/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:16:03 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/14 14:45:36 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j <= size)
		{
			if (tab[i] > tab [j])
			{
				k = tab[i];
				tab[i] = tab[j];
				tab[j] = k;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
/*
int main(void)
{
	int	a[] = {7, 3, 2, 1, 5};
	ft_sort_int_tab(a, 5);
	printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
	return (0);
}*/
