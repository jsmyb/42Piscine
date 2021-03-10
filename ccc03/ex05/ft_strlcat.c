/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:36:54 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/10/29 13:32:33 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int s_len;
	unsigned int d_len;
	unsigned int i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	i = 0;
	if (d_len < size)
		s_len += d_len;
	else
		s_len += size;
	if (size > 0)
	{
		while (*(src + i) && (i + d_len) < size - 1)
		{
			*(dest + i + d_len) = *(src + i);
			i++;
		}
		*(dest + d_len + i) = '\0';
	}
	return (s_len);
}
