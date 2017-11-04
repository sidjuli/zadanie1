#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x[4], y[4];
int i;
float L1, L2, L3, S;
int main()
{
   for (i=0; i<4; i++)
   {
       scanf("%d", &x[i]);
       scanf("%d", &y[i]);
   }
   L1 = sqrt((x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]));
   L2 = sqrt((x[0]-x[2])*(x[0]-x[2]) + (y[0]-y[2])*(y[0]-y[2]));
   L3 = sqrt((x[0]-x[3])*(x[0]-x[3]) + (y[0]-y[3])*(y[0]-y[3]));
   if (L3>L1 && L3>L2)
   {
       S = L1*L2;
   }
   if (L2>L1 && L2>L3)
   {
       S = L1*L3;
   }
   else
   {
       S = L2*L3;
   }
   printf("%f", S);
   return 0;
}
