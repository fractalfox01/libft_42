#include "libft.h"

char  **ft_new2dchar(size_t size, size_t strlen)
{
  char    **cptr;
  size_t  i;

  cptr = NULL;
  i = 0;
  if (size > 0)
  {
    cptr = (char **)malloc(sizeof(char *) * (size + 1));
    while (i < size)
    {
      cptr[i] = (char *)malloc(sizeof(char) * (strlen + 1));
      ft_bzero(cptr[i], strlen);
      i++;
    }
    cptr[i] = NULL;
  }
  return (cptr);
}
