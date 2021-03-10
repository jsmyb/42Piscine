/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:30:53 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/11/03 21:31:05 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= 46340 && i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
