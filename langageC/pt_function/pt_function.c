/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 02:14:16 by bkibonzi          #+#    #+#             */
/*   Updated: 2018/11/27 02:20:41 by bkibonzi         ###   ########.fr       */
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
	void (*f)(char);

	f = &ft_putchar;
	f('z');
	return(0);
}
