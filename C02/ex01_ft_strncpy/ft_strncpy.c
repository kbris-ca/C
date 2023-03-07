#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
  int   i;

  i = 0;
  while (!(str[i] == '\0'))
    i++;
  return(i);
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int   i;

  i = 0;
  while (i < n)
  {
    dest[i] = src[i];
    i++;
  }
  return (dest);
}

int main(void)
{
  unsigned int   i;
  char  src[] = "Hi! My name is Kevin";

  i = ft_strlen(src);
  char  dest[i];
  
  printf("%s", dest);
  ft_strncpy(dest, src, 10);
  printf("%s", dest);
  return (0);
}
