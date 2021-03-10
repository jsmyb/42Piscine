/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:07:55 by lsoghomo          #+#    #+#             */
/*   Updated: 2020/11/04 22:08:02 by lsoghomo         ###   ########.fr       */
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

	i = 1;
	while (argc > i)
	{
		ecr(argv[i]);
		i++;
	}
	return (0);
}
