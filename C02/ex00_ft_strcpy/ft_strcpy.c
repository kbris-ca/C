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

char    *ft_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  return (dest);
}

int main(void)
{
  int   i;
  char  src[] = "Hi! My name is Kevin";

  i = ft_strlen(src);
  char  dest[i];
  
  printf("%s", dest);
  ft_strcpy(dest, src);
  printf("%s", dest);
  return (0);
}
