/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slippert <slippert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:54:24 by slippert          #+#    #+#             */
/*   Updated: 2023/10/14 14:59:01 by slippert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = (void *)malloc(count * size);
	if (!temp)
		return (NULL);
	temp = ft_memset(temp, '\0', count * size);
	return (temp);
}
