#include <stdio.h>
#include <stdlib.h>

int maximo (int n, int v[])
{
   if (n == 1) return v[0];
   else {
      int x;
      x = maximo (n-1, v);
      printf (" . ");
      if (x > v[n-1]) return x;
      else return v[n-1];
   }
}

int main (int argc, char *argv[])
{
  int n, v[10], x;
  scanf("%d", &n);
  for (x = 0; x < n; x++)
    scanf("%d", &v[x]);
  printf("x = %d", maximo(n,v));
  printf ("  %d  ", sizeof (v)/* indica a quantidade de Bytes da memória */);
  return 0;
}
