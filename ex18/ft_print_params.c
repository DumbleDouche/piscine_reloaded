/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:26:17 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/03 21:42:31 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		x;
	int		y;

	x = 1;
	y = 0;
	if (argc < 2)
		return (0);
	while (x < (argc))
	{
		while (argv[x][y])
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		if (x != argc)
			ft_putchar('\n');
		y = 0;
		x++;
	}
}
