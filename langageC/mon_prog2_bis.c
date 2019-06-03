/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mon_prog2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkibonzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:27:36 by bkibonzi          #+#    #+#             */
/*   Updated: 2019/01/22 18:32:41 by bkibonzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h> 
# include <stdio.h>
# include <string.h>

void put_char(char c) {
	write(1, &c, 1);
}
void put_char_star(char *c) {
	write(1, c, 1);
}
void put_char_star_star(char **c) {
	write(1, *c, 1);
}
int main(int n, char ** av)
{
	char c = 'x';
	char *p = &c;
	put_char(c);
	put_char_star(&c);
	write(1, "\n", 1);
	put_char(*p);
	put_char_star(p);
	put_char_star_star(&p);
	write(1, "\n", 1);
	write(1, *av, strlen(*av));
	if (n > 1) {
	write(1, "\n", 1);
	write(1, av[1], strlen(av[1]));
	}
	return (0);
}
