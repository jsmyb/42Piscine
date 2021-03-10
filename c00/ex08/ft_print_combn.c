/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:53:30 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/10/27 20:28:16 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print(int arr[], int n)
{
	int i;
	int yes;

	i = -1;
	yes = 1;
	while (++i < n - 1)
	{
		if (!(arr[i] < arr[i + 1]))
		{
			yes = 0;
		}
	}
	if (yes == 1)
	{
		i = -1;
		while (++i < n)
		{
			ft_putchar(arr[i]);
		}
		if (arr[0] != 57 - n + 1)
		{
			ft_space();
		}
	}
}

void	ft_while(int arr[], int j, int n)
{
	if (j == n - 1)
	{
		arr[j] = 48;
		while (arr[j] < 58)
		{
			ft_print(arr, n);
			arr[j]++;
		}
	}
	else
	{
		arr[j] = 48;
		while (arr[j] < 58)
		{
			ft_while(arr, j + 1, n);
			arr[j]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int arr[n];

	ft_while(arr, 0, n);
}
