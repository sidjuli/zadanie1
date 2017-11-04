#include <stdio.h>
int i, n, f, a, b;

int main()
{
    scanf("%d", &n);
    if (n<3)
    {
        f=1;
    }
    else
    {
        a=1;
        b=1;
    }
    for (i=3; i<=n; i++)
    {
        f=a+b;
        a=b;
        b=f;
    }
    printf("%d", f);
}
