#include <stdio.h>
#include <unistd.h>

void    ft_swap(int *a, int *b)
{
  int aux;

  aux = *a;
  *a = *b;
  *b = aux;
}

void    ft_rev_int_tab(int *tab, int size)
{
  int   i, j;

  i = 0;
  j = size;
  while (i < j)
  {
    ft_swap(&tab[i], &tab[j]);
    i++;
    j--;
  }
}

int main(void)
{
  int   size;

  size = 5;
  int   tab[size];
  int   i;

  i = 0;
  while(i <= size)
  {
    tab[i] = i;
    i++;
  }
  printf("%d, %d, %d, %d and %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
  ft_rev_int_tab(tab, size);
  printf("%d, %d, %d, %d and %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
  return (0);
}
