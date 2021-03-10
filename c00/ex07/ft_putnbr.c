/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:08:47 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/10/27 20:26:00 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long a;

	a = nb;
	if (a < 0)
	{
		a = -a;
		ft_putchar('-');
	}
	if (a < 10)
		ft_putchar(a + '0');
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}
