#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char*argv[])
{
    int N, x, y, falha = FALSE;
    scanf("%d",&N);
    scanf("%d",&x);
    N--;

    while(N > 0 && !falha)
    {
        scanf("%d",&y);
        N--;
        if(y < x)
            falha = TRUE;
        x = y;
    }

    if (falha)
        printf("Nao crescente");
    else
        printf("Crescente");
    return 0;
}
