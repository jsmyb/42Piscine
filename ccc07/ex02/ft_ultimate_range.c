/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 21:34:01 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/11/11 21:34:07 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	if (!(ret = malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	*range = ret;
	return (i);
}
