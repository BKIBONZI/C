/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 19:48:55 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/22 22:16:13 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i; 

	i = 0; 
	while (str[i] != '\0')
	{
		ft_putchar(str[i]); 
		i++;
	}
}

int main()
{
	char *machaine ; 

	machaine="j'affiche ma chaine"; 
	ft_putchar('\n');
	ft_putstr(machaine);
	ft_putchar('\n');

	ft_putstr("j\'affiche ma chaine à l'écran"); 
	ft_putchar('\n');
	return (0);
}

