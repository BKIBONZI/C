/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:22:46 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/22 22:18:11 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_swap_chaines(char **a, char **b)
{
	char temp; 

	temp = *a; 
	*a = *b ;
	*b = temp; 
}

void ft_putchar(char c)
{
	write(1, &c, 1); 
}

void ft_putstr(char *str)
{
	int i; 

	i = 0; 
	while (str[i] !='\0')
	{
		ft_putchar(str[i]); 
		i++;
	}
}
