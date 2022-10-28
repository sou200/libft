/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serhouni <serhouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:49:21 by serhouni          #+#    #+#             */
/*   Updated: 2022/10/09 21:52:28 by serhouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sp;

	sp = (unsigned char *)s;
	while (n--)
	{
		if (*sp == (unsigned char)c)
			return (sp);
		sp++;
	}
	return (0);
}
