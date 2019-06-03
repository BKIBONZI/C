/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_param.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 00:16:31 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/22 17:21:33 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i; 

	i = 0; 
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++; 
	}
}

void	ft_swap(char **s1, char **s2)
{
	char *tmp; 

	tmp = *s1; 
	*s1 = *s2; 
	*s2 = tmp; 
}

int ft_strcmp(char *s1, char *s2)
{
	int i; 

	i = 0; 
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}



int	main(int argc, char **argv)
{
	int i; 

	i = 1; 

	while (i < argc - 1) 
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]); 
			i = 1;
		}
		else 
		i++;
	}
	i = 1; 
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0); 
}
