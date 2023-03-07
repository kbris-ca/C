#include <stdio.h>
#include <unistd.h>

char    *ft_strupcase(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
    i++;
  }
  return (str);
}

int main(void)
{
  char  aux[] = "Kevin";

  printf("%s\n", ft_strupcase(aux));
  return (0);
}
