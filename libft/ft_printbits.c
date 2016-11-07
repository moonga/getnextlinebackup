/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 12:44:51 by rhabib            #+#    #+#             */
/*   Updated: 2016/06/09 13:08:41 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (i & octet)
			ft_putchar('1');
		else
			ft_putchar('0');
		i = i / 2;
	}
}
