/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testwrite.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 04:48:03 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/07 06:49:14 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i; 

	i = 0; 
	while (str[i] != '\0')
	{
		i++;
	}
	return (i); 
}

int	main(int argc, char **argv)
{
	int i; 

	i = 1;
//	char vc;

//	vc = 'c';	

//	write(1, &vc, 1);
	while (i < argc)
	{
//	write(1, "\n", 1);

	write(1, *(&argv[i] + 1), ft_strlen(*(&argv[i] + 1)));
	printf("\n");
    i++;	
	}
//	printf("%c",argv);
	printf("\n");
	return (0);
}
