/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 04:09:52 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/04 07:19:35 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUF_SIZE 1

void	ft_display_file(char *file)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
	}
	while (read(fd, buf, BUF_SIZE) > 0)
	{
		write(1, &buf, 1);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argv[1]);
}
