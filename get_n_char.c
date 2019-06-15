/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_n_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:36:45 by tvandivi          #+#    #+#             */
/*   Updated: 2019/06/15 12:33:01 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

/*
** Reads BUF_SIZE number of characters from the file pointed to by fd.
*/

int		get_n_char(int fd, char **line, int BUF_SIZE)
{
	static char	*tab[FD_LIMIT];
	char		*buf;
	int			a;

	if (fd < 0 || !(line) || BUF_SIZE <= 0)
		return (-1);
	if (!(tab[fd]))
		tab[fd] = ft_strdup("");
	buf = ft_strnew(BUF_SIZE + 1);
	if ((a = read(fd, buf, BUF_SIZE)) > 0)
	{
		*line = ft_strdup(buf);
		free(buf);
		free(tab[fd]);
		return (1);
	}
	return (-1);
}
