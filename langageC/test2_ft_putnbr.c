/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 06:06:04 by bkibonzi          #+#    #+#             */
/*   Updated: 2018/11/30 18:46:44 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(void)
{

	int i;

	i = '0';

	while (i <= '9')
	{
		ft_putchar (i % 10 + '0');
		i++;
	}

}

int main(void)
{
	ft_putnbr(); 
	return (0); 
}

