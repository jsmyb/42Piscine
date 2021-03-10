/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:03:18 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/10/29 14:45:22 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && n < nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}
