#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "../include/libft.h"
#include "../include/get_next_line.h"

int	get_next_line(const int fd, char **arr)
{
	size_t i = 0;
	int nbr = 0;
	static char *str;

	str = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (fd)
	{
		read(fd, str, BUFFER_SIZE);
		while (i < BUFFER_SIZE)
		{
			if (*str > 0 && *str != 10)
			{
				arr[0][i] = str[i];
				i++;
			}
			else
				break ;
		}
		close(fd);
		if (i == 0)
			return (0);
		nbr = 1;
	}
	else
	{
		ft_putstr("Error opening file.");
		nbr = -1;
	}
	return (nbr);
}

int	main(int argc, char **argv)
{
	int fd;
	int i = 0;
	char *buf;
	static char **arr;
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	arr = buf;
	fd = open(argv[1], O_APPEND, O_RDONLY);
	if (argc > 1)
	{	get_next_line(fd, arr);
		while (i < 5)
		{
			ft_putstr(arr[i]);
			ft_putchar('\n');
			while (*arr)
				arr++;
			arr++;
			i++;
			get_next_line(fd, arr[i]);
		}
	}
	else
	{
		ft_putstr("Oooops, something wen't wrong. Did you enter any parameters?\n");
	}
	return (0);
}
