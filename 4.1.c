#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,mt,maxs,mins,i,imins,imax,k;

    scanf("%d",&n);

    int* S = malloc(n*sizeof(int));
    int* M = malloc(n*sizeof(int));

    for (i=0; i<n; i++)
    {
        scanf("%d", &M[i]);
        scanf("%d", &S[i]);
    }
    maxs = 0;
    mt = 0;
    k = 0;
    imax = 0;
    for (i=0; i<n; i++)
    {
        if (S[i]>maxs)
        {
            maxs = S[i];
            imax = i;
        }

    }
    printf("maxs = %d   imax = %d \n", maxs, imax+1);
    while (mt<=maxs)
    {
        k = k + 1;
        mins = S[1];
        imins = 1;
        for(i=0; i<n; i++)
        {
            if (mins>S[i])
            {
                mins = S[i];
                imins = i;
            }

        }
        if (mins!=maxs)
        printf("%d %d \n", k, imins+1);
        mt = mt + M[imins];
        S[imins] = S[imax];
    }
    printf("%d %d \n", k, imax+1);
    printf("%d \n",k);
free(S); free(M);    
return 0;
}
