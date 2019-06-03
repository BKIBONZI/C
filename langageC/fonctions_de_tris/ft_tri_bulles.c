/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri_bulles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:20:39 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/23 19:50:38 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

ft_tri_bulles(int *tab)
{
	int arr[] = {1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14};
	int i; 
	int size_tab; 

	size_tab = sizeof(arr)/sizeof(arr[0])) ;
	i = 0;
	while (i < sizeof(tab))
	{
		if (tab[i] > tab[i+1])
		{
			ft_swap(tab[i], tab[i+1]);
			i = 1; 
		}
		else 
			i++;
	}	
}

