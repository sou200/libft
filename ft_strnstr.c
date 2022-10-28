/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serhouni <serhouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:35:16 by serhouni          #+#    #+#             */
/*   Updated: 2022/10/19 16:52:04 by serhouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		while (haystack[i + j] != '\0' && needle[j] == haystack[i + j]
			&& i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		j = 0;
		i++;
	}
	return (0);
}
