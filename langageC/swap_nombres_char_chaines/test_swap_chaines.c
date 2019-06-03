/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:22:46 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/22 22:06:17 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void ft_swap_chaines(char **a, char **b)
{
	char *temp; 

	temp = *a; 
	*a = *b;
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

int main()
{
	char *pa; 
	char *pb; 

	pa = "maman";
	pb = "papa"; 

	ft_putstr("avant");
	ft_putchar('\n');
	ft_putstr(pa);
	ft_putchar('\n'); 
	ft_putstr(pb);
	ft_putchar('\n');
	ft_swap_chaines(&pa,&pb);
	ft_putchar('\n'); 
	ft_putstr("après swap_chaines"); 
	ft_putchar('\n');
	ft_putstr(pa); 
	ft_putchar('\n');
	ft_putstr(pb); 
	ft_putchar('\n');
	return (0);
}
