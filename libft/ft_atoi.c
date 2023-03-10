/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:56:39 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/12 19:42:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


long int ft_atoi(const char *nptr)
{
	int	cnt;
	int	minus_sign;
	long int	res;

	cnt = 0;
	minus_sign = 1;
	res = 0;
	while (nptr[cnt] == ' ' || nptr[cnt] == '\n' || nptr[cnt] == '\t' || \
	nptr[cnt] == '\v' || nptr[cnt] == '\f' || nptr[cnt] == '\r')
		cnt++;
	if (nptr[cnt] == '-' || nptr[cnt] == '+')
	{
		if (nptr[cnt] == '-')
			minus_sign = -1;
		cnt++;
	}
	while (nptr[cnt] >= '0' && nptr[cnt] <= '9')
	{
		res = (res * 10) + (nptr[cnt] - '0');
		cnt++;
	}
	return (res * minus_sign);
}
