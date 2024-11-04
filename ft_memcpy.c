/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:13:51 by alermi            #+#    #+#             */
/*   Updated: 2024/10/19 17:25:57 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*source;

	source = (char *)src;
	str = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*(str)++ = *(source)++;
		n--;
	}
	return (dest);
}
