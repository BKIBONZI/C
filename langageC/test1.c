/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:54:30 by bkibonzi          #+#    #+#             */
/*   Updated: 2018/11/18 19:00:45 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1); 
}

int main(void)
{
	char vc; 
	vc = 'a';

	ft_putchar(vc); 
	return(0); 
}

