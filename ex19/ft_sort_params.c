/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:54:21 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/04 01:17:29 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(int argc, char **argv)
{
	int		x;
	int		y;

	x = 1;
	y = 0;
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

int		main(int argc, char **argv)
{
	int		x;
	char	*temp;

	temp = argv[0];
	x = 1;
	if (argc < 2)
		return (0);
	while (x < argc)
	{
		if (ft_strcmp(argv[x], argv[x + 1]) > 0)
		{
			temp = argv[x + 1];
			argv[x + 1] = argv[x];
			argv[x] = temp;
			x = 0;
		}
		else
			x++;
	}
	ft_print_params(argc, argv);
	return (0);
}
