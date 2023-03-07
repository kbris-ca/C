#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str)
{
  int   i;

  if (str[0] == '\0')
    return (1);

  i = 0;
  while (str[i] != '\0')
  {
    if(str[i] < ' ' || str[i] > '~')
      return (0);
    i++;
  }
  return (1);
}

int main(void)
{
  int   i;

  printf("%d\n", (i = ft_str_is_printable("3535AsoyKevin")));
  printf("%d\n", (i = ft_str_is_printable("")));
  printf("%d\n", (i = ft_str_is_printable("Ñ")));
  return (0);
}
