/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:34:42 by jremy             #+#    #+#             */
/*   Updated: 2021/07/01 10:42:39 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	x;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb < 9)
	{
		x = nb + '0';
		write(1, &x, 1);
		return ;
	}
	x = nb;
	x = x % 10 + '0';
	ft_putnbr(nb / 10);
	write(1, &x, 1);
}
