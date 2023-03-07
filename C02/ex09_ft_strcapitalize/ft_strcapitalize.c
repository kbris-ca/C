#include <stdio.h>
#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
  int   i;

  if ((str[0] >= 'a' && str[0] <= 'z'))
    str[0] = str[0] - 32;
  i = 0;
  while (str[i] != '\0')
  {
    if ((str[(i - 1)] < 'A' || str[(i - 1)] > 'Z') && (str[(i - 1)] < 'a' || str[(i - 1)] > 'z') && (str[(i - 1)] < '0' || str[(i - 1)] > '9') && (str[i] >= 'a' && str[i] <= 'z'))
      str[i] = str[i] - 32;
    i++;
  }
  return (str);
}

int main(void)
{
  char  aux[] = "soy kevin-bris, tengo 23años";

  printf("%s\n", ft_strcapitalize(aux));
  return (0);
}
