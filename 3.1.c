#include <stdio.h>
int main()

{
    int n, i, max, ch;
    max=0;
    scanf("%d\n", &n);
    scanf("%d", &max);
    for (i=0; i<(n-1); i++)
    {
        scanf("%d", &ch);
        if (ch>max)
        {
            max=ch;
        }
    }
    printf("%d", max);
}
