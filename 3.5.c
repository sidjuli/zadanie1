#include <stdio.h>
#include <math.h>

int main()
{
int n, i, k;
scanf("%d", &n);
k=0;
for (i=2; i<=sqrt(n); i++)
{
if (n%i==0)
{
k++;
printf("%d\n", k);
}
}
if (k==0)
{
printf("chislo prostoe");
}
else
{
printf("chislo ne prostoe");
}
}
