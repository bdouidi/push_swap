/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:01:05 by user42            #+#    #+#             */
/*   Updated: 2021/10/04 19:01:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnew(char **str)
{
	(*str) = (char *)malloc(sizeof(char) * 1);
	if (*str == NULL)
	{
		free((*str));
		(*str) = NULL;
		return (-1);
	}
	(*str)[0] = 0;
	return (1);
}
