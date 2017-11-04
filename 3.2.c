#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, f1, f2, f3;
  scanf("%d",&n);
  if ((n==1)||(n==2))
  {
      printf("1");
      return 0;
  }
  f1 = 1;
  f2 = 1;
  for (i=3; i<=n; i++)
  {
      f3 = f2 + f1;
      f1 = f2;
      f2 = f3;
  }
  printf("%d",f3);
  return 0;
}
