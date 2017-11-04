#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, A, B, ee, d, ic, k, i;
    A =0 ;
    B = 10000;
    scanf("%d", &n);
    int* b = malloc(n*sizeof(int));
    int* e = malloc(n*sizeof(int));
    for (i=0; i<n; i++)
    {
        scanf("%d %d", &b[i], &e[i]);
    }
    ee = 0;
    ic = 0;
    k = 0;
    while (ee<10000)
    {
        k = k + 1;
        d = 0;
        for (i=0; i<n; i++)
        {
            if ((b[i]<=A)&&(e[i]-b[i]>d))
            {

                ic = i;
            }
            d = e[ic] - b[ic];

        }
        b[ic] = B;
        A = e[ic];
        printf("%d %d \n", k, ic+1);
        ee = e[ic];
    }
    printf("%d", k);
    free(b); free(e);
    return 0;

}
