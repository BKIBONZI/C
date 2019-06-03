/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:29:31 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/23 18:48:25 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long nb ; 

	nb = n ;
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


int		ft_strcmp(char *s1, char *s2)
{
	int i; 

	i = 0; 
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1); 
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0); 
}

int main()
{
	int vret_ft_strcmp;
	vret_ft_strcmp  = ft_strcmp("toto", "toto");
	ft_putnbr(vret_ft_strcmp); 
	return (0);
}
