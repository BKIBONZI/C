/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 03:35:34 by bkibonzi          #+#    #+#             */
/*   Updated: 2018/12/15 04:43:15 by bkibonzi         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	int i; 

	i = 1; 
	while (i < argc)
	{
		ft_putstr(argv[i]); 
		ft_putchar('\n');
		i++;
	}
	return (0); 
}
