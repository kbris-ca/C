#include <stdio.h>
#include <unistd.h>

void    ft_swap(int *a, int *b)
{
  int aux;

  aux = *a;
  *a = *b;
  *b = aux;
}

void    ft_sort_int_tab(int *tab, int size)
{
  int   i, j;

  i = 0;
  while(i < size)
  {
    j = size;
    while (j > i)
    {
      if (tab[i] > tab[j])
      ft_swap(&tab[i], &tab[j]);
      j--;
    }
    i++;
  }
}

int main(void)
{
  int   size;

  size = 5;
  int   tab[size];
  
  tab[0] = 5;
  tab[1] = 2;
  tab[2] = 4;
  tab[3] = 1;
  tab[4] = 3;
  printf("%d, %d, %d, %d and %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
  ft_sort_int_tab(tab, size);
  printf("%d, %d, %d, %d and %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
  return (0);
}
