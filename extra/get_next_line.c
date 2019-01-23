#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "../include/libft.h"

int	get_next_line(const int fd, char *buf, size_t FILESIZE)
{
	size_t i = 0;
	if (fd > 2)
	{
		read(fd, buf, FILESIZE);
		ft_putstr("fd is: ");
		ft_putnbr(fd);
		ft_putstr("\n");
		ft_putstr("buf is: ");
		while (i < FILESIZE)
		{
			if (*buf > 0)
			{
				ft_putchar(*buf);
				i++;
				buf++;
			}
			else
				break ;
		}
		ft_putstr("\n");
		close(fd);
	}
	else
	{
		ft_putstr("Error opening file.");
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int fd;
	char *buf;
	size_t FILESIZE = 4097;
	buf = (char *)malloc(sizeof(char) * 4097);	
	fd = open(argv[1], O_APPEND, O_RDONLY);
	if (argc > 1)
	{
		get_next_line(fd, buf, FILESIZE);
	}
	else
	{
		ft_putstr("Oooops, something wen't wrong. Did you enter any parameters?\n");
	}
	return (0);
}
