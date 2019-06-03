/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:54:30 by bkibonzi          #+#    #+#             */
/*   Updated: 2018/11/18 19:14:06 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <string.h>

void ft_putchar(char **c)
{
	write(1,*(c+1),strlen(*(c+1))); 
}

int main(void)
{
	char vc;
    char **pvc; 

	vc = 'a';
	pvc = &vc;

	ft_putchar(pvc); 
	return(0); 
}

