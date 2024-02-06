#include <stdio.h>
#include <stdlib.h>

/* Alocação estática: int v[100]; */
/* Mesma coisa, so que com alocacao dinamica: v = malloc (100 * sizeof (int)); */

int main (int argc, char *argv[])
{
  int y, j, n, m, i;
  printf ("Para vetor: 1\nPara matriz: 2");
  scanf("%d", &y);
  if (y == 1) {
    scanf ("%d", &n);

    int *v;
    v = malloc (n * sizeof (int));  /*Para vetores*/

    for (i = 0; i < n; ++i)
      scanf ("%d", &v[i]);
    for (i = 0; i < n; ++i)
      printf ("%d ", v[i]);
    free (v);  /*SUPER IMPORTANTE COLOCAR NO FINAL*/
    return 0;
  }

  if (y == 2) {
    scanf("%d %d", &m, &n);

    int **M;
    M = malloc (m * sizeof (int *));  /*Para Matrizes*/
    for (i = 0; i < m; ++i)
      M[i] = malloc (n * sizeof (int));

    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        scanf ("%d", &M[i][j]);
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++)
        printf ("%d ", M[i][j]);
      printf ("\n");
    }
    free (M);  /*SUPER IMPORTANTE COLOCAR NO FINAL*/
  }
  return 0;
}
