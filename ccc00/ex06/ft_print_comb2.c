/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:03:35 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/10/27 16:12:47 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a[2];

	a[0] = -1;
	while (++a[0] <= 98)
	{
		a[1] = a[0];
		while (++a[1] <= 99)
		{
			ft_putchar((a[0] / 10) + '0');
			ft_putchar((a[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar((a[1] / 10) + '0');
			ft_putchar((a[1] % 10) + '0');
			if (a[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
