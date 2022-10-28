/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serhouni <serhouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:17:55 by serhouni          #+#    #+#             */
/*   Updated: 2022/10/23 22:46:36 by serhouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int nb)
{
	int		len;
	long	n;

	n = nb;
	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long	n;
	int		len;
	int		i;
	char	*p;

	n = nb;
	len = numlen(n);
	p = malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (0);
	if (n == 0)
		p[0] = '0';
	if (n < 0)
	{
		n *= -1;
		p[0] = '-';
	}
	i = len - 1;
	while (n > 0)
	{
		p[i--] = n % 10 + '0';
		n /= 10;
	}
	p[len] = '\0';
	return (p);
}
