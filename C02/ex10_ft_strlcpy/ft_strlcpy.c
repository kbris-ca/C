#include <stdio.h>
#include <unistd.h>

int    ft_strlen(char *str)
{
  int   i;

  i = 0;
  while (!(str[i] == '\0'))
    i++;
  return(i);
}

char    *ft_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int   i;

  i = 0;
  while (i < size)
  {
    dest[i] = src[i];
    i++;
  }
  while (src[i] != '\0' && i > size)
  {
    dest[i] = '\0';
    i++;
  }
  return (dest);
}

int main(void)
{
  int   i;
  unsigned int  size = 10;
  char  src[] = "Hi! My name is Kevin";

  i = ft_strlen(src);
  char  dest[i];
  
  printf("%s", dest);
  ft_strlcpy(dest, src, size);
  printf("%s", dest);
  return (0);
}
