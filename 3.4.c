#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n, i, j;
int main()
{
    scanf("%d", &n);
    int a[100][100];
    for (i=0; i<=n; i++)
    {
        a[i][0] = 1;
        for (j=1; j<=n; j++)
        {
            a[i][j]=0;
        }
    }
    for (i=1; i<=n; i++)
    {
        for (j=0; j<n; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%d", a[n][i]);
    }
    printf("1\n");
}
