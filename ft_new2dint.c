#include "libft.h"

int **ft_new2dint(size_t size)
{
  int     **iptr;
  size_t  i;

  iptr = NULL;
  i = 0;
  if (size > 0)
  {
    iptr = (int **)malloc(sizeof(int *) * (size + 1));
    while (i < size)
    {
      iptr[i] = (int *)malloc(sizeof(int) * (1));
      iptr[i][0] = 0;
      i++;
    }
    iptr[i] = NULL;
  }
  return (iptr);
}
