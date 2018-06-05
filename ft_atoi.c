/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmayika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:33:17 by kmayika           #+#    #+#             */
/*   Updated: 2018/06/05 13:43:59 by kmayika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	sign;
	int	res;

	x = 0;
	sign = 1;
	res = 0;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n' ||\
			str[x] == '\r' || str[x] == '\v' || str[x] == '\f')
	{
		x++;
	}
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = sign * -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (res * 10) + (str[x] - '0');
		x++;
	}
	res = res * sign;
	return (res);
}
