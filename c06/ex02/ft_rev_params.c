/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:09:22 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/11/04 22:09:38 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ecr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ecr(argv[i]);
		i--;
	}
	return (0);
}
