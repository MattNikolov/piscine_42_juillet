/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:26:47 by jremy             #+#    #+#             */
/*   Updated: 2021/07/04 14:38:50 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>



void	rush00(int x, int y);

void	ft_putchar(char c);

int	main(void)
{

	printf("rush(5,3)\n");
	rush00(5,3);
	printf("\n");

	printf("rush(5,1)\n");
	rush00(5,1);

	printf("\n");


	printf("rush(1,1)\n");
	rush00(1,1);

	printf("\n");

	printf("rush(1,5)\n");
	rush00(1,5);

	printf("\n");

	printf("rush(4,4)\n");
	rush00(4,4);
	printf("\n");


	printf("rush(5,3)\n");
	rush00(5,3);
	printf("\n");

	printf("rush(0,0)\n");
	rush00(0,0);
	printf("\n");


	return (0);
}
