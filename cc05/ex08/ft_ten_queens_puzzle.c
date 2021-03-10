/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:06:34 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/11/09 19:06:39 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_table[20];
int	g_numb;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int n)
{
	int i;
	int j;

	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= n)
		{
			if (g_table[i] == j)
				ft_putchar(g_table[i] - 1 + '0');
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

int		place(int row, int column)
{
	int i;
	int a;
	int b;

	i = 1;
	while (i <= row - 1)
	{
		if (g_table[i] == column)
			return (0);
		else
		{
			a = g_table[i] - column;
			b = i - row;
			if (a < 0)
				a *= -1;
			if (b < 0)
				b *= -1;
			if (a == b)
				return (0);
		}
		i++;
	}
	return (1);
}

int		queen(int row, int n)
{
	int col;

	col = 1;
	while (col <= n)
	{
		if (place(row, col))
		{
			g_table[row] = col;
			if (row == n)
			{
				g_numb++;
				print(n);
			}
			else
				queen(row + 1, n);
		}
		col++;
	}
	return (g_numb);
}

int		ft_ten_queens_puzzle(void)
{
	return (queen(1, 10));
}
