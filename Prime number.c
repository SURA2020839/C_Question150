#include<stdio.h>
int main()
{
    int i;
    int n=57
   int isPrime=0;
    for(i=2;i*i<n;i++)
{
    if(n%i!=0)
     isPrime=1; 
}
    if(isPrime==1)
    {
        printf("%d is prime",n);
    }
    else
    {
        printf("%d is not prime",n);
    }
}

