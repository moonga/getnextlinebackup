/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snrp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <moongamingpp@hotmail.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 20:47:56 by rhabib            #+#    #+#             */
/*   Updated: 2016/06/09 13:32:32 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_snrp(char *str, char *c1, char *c2)
{
	int i;

	i = 0;
	if (c1[1] != '\0' || c2[1] != '\0')
	{
		ft_putchar('\n');
		exit(0);
	}
	while (str[i] != '\0')
	{
		if (str[i] == c1[0])
			ft_putchar(c2[0]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
