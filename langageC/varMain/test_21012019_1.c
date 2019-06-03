/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_21012019_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 15:51:12 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/22 18:10:34 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i; 

	i = 0; 
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


int main(int argc, char **argv)
{
	int i; 

	i = 0; 

	ft_putchar(*(argv[1]));
	ft_putchar('\n');
	while (i < argc)
	{
		ft_putstr(argv[i]); 
		ft_putchar('\n');
		i++; 
	}
	return 0;
}
