/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 02:41:02 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/03 04:26:52 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	unsigned int	ret;

	ret = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		ret *= nb;
		nb--;
	}
	return (ret);
}
