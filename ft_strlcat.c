/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serhouni <serhouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:55:19 by serhouni          #+#    #+#             */
/*   Updated: 2022/10/11 22:25:05 by serhouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	desl;
	size_t	srcl;
	size_t	i;
	size_t	j;

	srcl = ft_strlen(src);
	if (size == 0)
		return (srcl);
	desl = ft_strlen(dest);
	j = desl;
	i = 0;
	if (size <= desl)
		return (size + srcl);
	while (src[i] != '\0' && j < (size - 1))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (desl + srcl);
}
