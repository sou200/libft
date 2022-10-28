/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serhouni <serhouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:59:50 by serhouni          #+#    #+#             */
/*   Updated: 2022/10/23 22:46:26 by serhouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	size;
	void	*p;

	size = nelem * elsize;
	if (nelem != 0 && (size / nelem) != elsize)
		return (0);
	p = malloc(size);
	if (p == 0)
		return (0);
	ft_bzero(p, size);
	return (p);
}
