/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 02:00:15 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/04 07:06:03 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*ret;

	i = -1;
	ret = NULL;
	if (min >= max)
		return (ret);
	ret = (int*)malloc(4 * (max - min));
	while (min < max)
	{
		ret[++i] = min++;
	}
	return (ret);
}
