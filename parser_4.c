/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:45:41 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:15 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			parse_string(t_glb *glb, t_alst *arg, char *orig)
{
	char		*buf_str;

	if (glb)
	{
		glb->total += 1;
		buf_str = va_arg(glb->ap, char *);
		if (!(buf_str) && BLANK == 0 && FIELDWIDTH == 0)
			ps_helper_1(arg, orig);
		else if ((!(buf_str) || !(*buf_str) || *buf_str == 0) || BLANK == 1)
			ps_helper_2(arg, orig, buf_str);
		else
			ps_helper_3(arg, orig, buf_str);
	}
	return (0);
}

static void	pf_putchar(t_glb *glb)
{
	glb->ncount++;
	write(1, "\0", 1);
}

static char	*assign_buf(size_t buf_len)
{
	if (buf_len)
		return (ft_strnew(buf_len));
	else
		return (ft_strdup(" "));
}

int			parse_char(t_glb *glb, t_alst *arg, char *orig)
{
	int		c;
	size_t	buf_len;
	char	*padded;

	buf_len = 0;
	glb->total += 1;
	c = va_arg(glb->ap, int);
	if (c == 0)
		pf_putchar(glb);
	buf_len = (size_t)FIELDWIDTH;
	padded = assign_buf(buf_len);
	padded[0] = c;
	if (PLUS_FLAG == 1)
		ARG = ft_strjoin(orig, pad_left(arg, padded, 0));
	if (MINUS_FLAG == 1)
		ARG = ft_strjoin(orig, pad_right(arg, padded));
	else
		ARG = ft_strjoin(orig, pad_left(arg, padded, 0));
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
	return (0);
}
