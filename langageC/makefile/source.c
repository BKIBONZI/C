/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 04:24:57 by bkibonzi          #+#    #+#             */
/*   Updated: 2018/11/27 04:50:55 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main(void)
{
	char c; 

	c='z'; 
	ft_putchar(c); 
	return (0);
}
