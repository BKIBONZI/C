/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 23:36:44 by bkibonzi          #+#    #+#             */
/*   Updated: 2018/12/15 00:59:54 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"
void ft_putchar(char c)
{
	write(1, &c, 1);
}
