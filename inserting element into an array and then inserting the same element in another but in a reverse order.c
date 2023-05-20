#include <stdio.h>
int main()
{
 int n=10,i,ar1[11],ar2[11];
 for(i=0;i<=n;i++)
  {
      ar1[i]=i+1;
      printf("%d " ,ar1[i]);
  }
   printf(" \n ");
  for(i=0;i<=n;i++)
  {
      ar2[i]=ar1[n-i];
      printf("%d " ,ar2[i]);
  }
}