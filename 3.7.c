#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, m;
    int c=0;
    scanf("%d", &n);
    scanf("%d", &m);
    int* ost = (int*)malloc(n*sizeof(int));
    for (i=0; i<n; i++)
    {
        ost[i]=1;
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            while (ost[c] != 1)
            {
                c =(c+1)%n;
            }
        }
        ost[c]=0;
        if (i>=n-3)
            {
                printf("%d",c);
            }
    }
}
