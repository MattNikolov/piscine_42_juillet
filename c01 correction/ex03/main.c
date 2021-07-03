/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:41:58 by jremy             #+#    #+#             */
/*   Updated: 2021/07/03 15:45:41 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);

int main ()
{
	int a = 10;
	int b = 2;
	int div = 0;
	int mod = 0;
	ft_div_mod(a,b, &div, &mod);
	printf(" div doit etre egal  a 5 = %d et modulo doit etre egal a 0 = %d \n",div,mod);

}
