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

int main(void)
{
  printf("The len of 'My name is Kevin Bris' is %d", ft_strlen("My name is Kevin Bris"));
  return (0);
}
