/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:32:36 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/21 14:33:08 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = argc - 1;
	while (i > 0)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			write(1, &argv[i][k], 1);
			k++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
