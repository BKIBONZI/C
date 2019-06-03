/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_nombres.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:40:33 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/24 00:07:15 by bkibonzi         ###   ########.fr       */
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

void	ft_putchar(char c)
{
	write(1, &c, 1); 
}

void ft_putnbr(int n)
{
	long nb; 

	nb = n ; 
	 if (nb < 0)
	 { 
		 ft_putchar('-'); 
		 nb = nb * -1; 
	 }

	 if ( nb >= 10)
	 {
		 ft_putnbr(nb / 10);
	 }
	 ft_putchar(nb % 10 + '0');
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


int main()
{
	int va; 
	int vb;

	va = 55; 
	vb = 56;
    ft_putstr("avant swap_nombres");	
	ft_putchar('\n');
	ft_putnbr(va);
	ft_putchar('\n');
	ft_putnbr(vb); 
	ft_putchar('\n');
	ft_swap_nombres(&va,&vb); 
	ft_putstr("après swap_nombres");
	ft_putchar('\n');
	ft_putnbr(va);
	ft_putchar('\n');
	ft_putnbr(vb); 
	ft_putchar('\n');
	return (0);
}
