#include <stdio.h>
/**
 * main - finds and prints furst 98 fibonacci numve
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success) 
 */
int main(void)
{
  unsigned long int i, j, k, j1, j2, k1, k2;

  i = 1;
  j = 2;

  printf("%lu", j);

  for (i = 0; i < 91; i++)
    {
      printf(", %lu", k);
      k = k + j;
      j = k - j;
    }

  j1 = j / 1000000000;
  j2 = j % 1000000000;
  k1 = k / 1000000000;
  k2 = k % 1000000000;

  for (i = 91; i < 99; i++)
    {
      printf(", %lu", k1 + (k2 / 1000000000));
      printf("%lu", k2 % 1000000000);

      k1 = k1 + j1;
      j1 = k1 - j1;
      k2 = k2 + j2;
      k2 = k2 - j2;
    }

  printf("/n");

  return (0);
}
  
    
