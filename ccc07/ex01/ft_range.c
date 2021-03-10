/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 21:33:17 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/11/11 21:33:47 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	if (!(ret = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}
