/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:08:16 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/27 12:13:19 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_set(char *str, char *charset, int *ptr_i)
{
	int	i;
	int	k;

	i = *ptr_i;
	k = 0;
	while (charset[k] != '\0')
	{
		if (str[i] == charset[k])
			return (1);
		k++;
	}
	return (0);
}

char	*word_memory(char *str, char *charset, int *ptr_i)
{
	int		i;
	int		k;
	int		length;
	char	*c;

	i = *ptr_i;
	length = 0;
	while (str[i] != '\0' && check_set(str, charset, &i) == 0)
	{
		length++;
		i++;
	}
	c = (char *)malloc(sizeof(char) * (length + 1));
	k = 0;
	i = i - length;
	while (k < length)
	{
		c[k] = str[i];
		i++;
		k++;
	}
	c[k] = '\0';
	*ptr_i = i;
	return (c);
}

int	nb_elements(char *str, char *charset)
{
	int	i;
	int	ver;
	int	elements;

	i = 0;
	ver = 1;
	elements = 0;
	while (str[i] != '\0')
	{
		if (check_set(str, charset, &i) == 0 && ver == 1)
		{
			elements++;
			ver = 0;
		}
		else if (check_set(str, charset, &i) == 1)
			ver = 1;
		i++;
	}
	return (elements);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		w;
	int		elements;
	char	**a;

	elements = nb_elements(str, charset);
	a = (char **)malloc(sizeof(char *) * (elements + 1));
	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_set(str, charset, &i) == 1)
			i++;
		if (str[i] != '\0' && check_set(str, charset, &i) == 0)
		{
			a[w] = word_memory(str, charset, &i);
			w++;
		}
	}
	a[w] = 0;
	return (a);
}
/*				
int	main(void)
{
	char	*str = " this is? my? ! string ab";
	char	*charset = " ?!";
	//printf("%d\n", nb_elements(str, charset));
	//int	i = 1;
	//printf("%s\n", word_memory(str, charset, &i));
	//printf("%d\n", i);
	char	**s = ft_split(str, charset);
	printf("%s,%s,%s,%s,%s\n", s[0], s[1], s[2], s[3], s[4]);
	return (0);
}*/
/*
int		main(void)
{
	int		str_n;
	char	*str;
	char	*sep;
	char	**strs;

	str = "WfrONjnyoiSQ5GYKxJ6NSlqrUtPkklcoKR f";
	sep = "ySzX";
	strs = ft_split(str, sep);
	str_n = 0;
	while (strs[str_n] != 0)
	{
		printf("[%d]: %s\n", str_n, strs[str_n]);
		str_n++;
	}
	free(strs);
	return (0);
}*/
