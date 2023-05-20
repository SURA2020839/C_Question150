#include<stdio.h>
int main()
{
    int a,i,fact=1;
    printf(" Enter the number for factorial :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    //printf("The value of i is %d \n ",i);
    fact= fact*i;
     //
     printf("The value of fact is %d \n ",fact);
    }
    printf("The value of factorial is %d",fact);

}