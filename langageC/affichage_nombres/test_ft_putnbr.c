/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 22:36:14 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/22 23:41:19 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1); 
}

void ft_putnbr(int n)
{
	long nb;

	nb = n;

	if (nb < 0)
	{
		ft_putchar('-'); 
		nb = nb * -1; 
	}

	if (nb >= 10) 
	{ 
		ft_putnbr(nb/10); 
	}
	ft_putchar(nb % 10 + '0');
}

int main()
{
	int i;

	i = 0;
	
	ft_putnbr(10);
	ft_putchar('\n');


	while (i <= 10)
	{
		ft_putnbr(i); 
		ft_putchar('\n'); 
		i++; 
	}
	ft_putchar('\n');
	ft_putnbr(452);
	return (0);
}

		
