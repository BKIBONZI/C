/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:33:28 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/22 23:46:13 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}


void ft_putnbr(int nb)
{
	long n;

	n = nb;

	if (n < 0)
	{
		ft_putchar('-'); 
		n = n * -1;
	}

	if (n >=10 )
	{
		ft_putnbr(n/10); 
	}
	ft_putchar(n % 10 + '0');
}
int main(void)
{
	int i;

	ft_putnbr(62); 
	ft_putchar('\n');

	i = 0;

	while(i <= 10)
	{
		ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	return(0); 
}
