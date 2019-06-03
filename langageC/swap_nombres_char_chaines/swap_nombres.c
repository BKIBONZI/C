/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_nombres.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:40:33 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/23 23:26:21 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <unistd.h>

void ft_swap_nombres (int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b ; 
	*b = temp; 
}

void ft_putnbr(int n)
{
	long nb; 

	nb = n ; 
	 if (nb < 0)
	 { 
		 ft_putchar('-); 
		 nb = nb * -1; 
	 }

	 if ( nb >= 10)
	 {
		 ft_putnbr(nb / 10);
	 }
	 ft_putchar(nb % 10 + '0');
}

ft_putchar(char c)
{
	write(1, &c, 1); 
}
