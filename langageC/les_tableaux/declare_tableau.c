/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declare_tableau.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:41:35 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/23 22:33:00 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long nb ; 

	nb =n ; 
	if (nb < 0)
	{ 
		ft_putchar('-'); 
		nb = nb * -1; 
	}

	if (nb >= 10)
	{
		ft_putnbr(nb / 10); 
	}
	ft_putchar(nb % 10 + '0');
}

int main() 
{ 
	int size_tab; 
	int arr[] = {1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14}; 

	size_tab =  sizeof(arr)/sizeof(arr[0]); 

	      printf("Number of elements :%lu", sizeof(arr)/sizeof(arr[0])); 
		  ft_putchar('\n');
		  ft_putchar('1');
		  ft_putchar('\n');
		  ft_putnbr(sizeof(arr)/sizeof(arr[0]));
		  ft_putchar('\n');
		  ft_putchar('2');
		  ft_putchar('\n');
		  ft_putnbr(size_tab); 
		  ft_putchar('\n');
		  ft_putchar('2');
		  ft_putchar('\n');
		  return 0; 

}  
