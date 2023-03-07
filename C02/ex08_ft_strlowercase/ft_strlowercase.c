#include <stdio.h>
#include <unistd.h>

char    *ft_strlowercase(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
    i++;
  }
  return (str);
}

int main(void)
{
  char  aux[] = "KEVIN";

  printf("%s\n", ft_strlowercase(aux));
  return (0);
}
