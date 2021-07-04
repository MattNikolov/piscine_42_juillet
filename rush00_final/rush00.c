/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:37:58 by jremy             #+#    #+#             */
/*   Updated: 2021/07/04 14:54:35 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_line(int x, char a, char b, char c)
{
	int	width;

	width = x - 2;
	ft_putchar(a);
	while (width > 0 && x > 2)
	{
		ft_putchar(b);
		width--;
	}
	if (x > 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int	height;

	if (x == 0 || y == 0)
		return ;
	height = y - 2;
	if (x >= 1 && y >= 1)
		ft_line(x, '/', '*', '\\');
	while (height > 0 && y > 2)
	{
		ft_line(x, '*', ' ', '*');
		height--;
	}
	if (y > 1)
		ft_line(x, '\\', '-', '/');
}
