/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:47:18 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/10/27 14:03:14 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int team;
	int i;

	i = 1;
	while (i < size)
	{
		if (i == 0 || tab[i] >= tab[i - 1])
		{
			i++;
		}
		else
		{
			team = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = team;
			i--;
		}
	}
}
