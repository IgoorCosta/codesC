#include <stdio.h>
#include <stdlib.h>
int lg (int);

int main (int numargs, char *arg[])
{
  int i, B, K;
  scanf("%d %d", &B, &K);
   int N = 1;
   printf ("\n          N  lg(N)\n\n");
   for (i = 1; i <= K; ++i) {
      N = B * N;
      printf ("%11d %5d\n", N, lg (N));
   }
   return EXIT_SUCCESS;
}

int lg (int N)
{
   int i = 0, n = N;
   while (n > 1) {
      i += 1;
      n /= 2;
   }
   return i;
}


