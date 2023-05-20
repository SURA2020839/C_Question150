#include <stdio.h>
int isprime(int n);
int main() 
{   
    int n1=1,n2=100,ar[200],i;
    for(i=n1;i<=n2;i++)
    {
        ar[i]=i;
    }
    
   /*for(i=ar[n1];i<=ar[n2];i++)
    {
    printf("%d \n ",ar[i]);
    } */
 
 for(i=ar[n1];i<=ar[n2];i++)
 {
     if(isprime(i))
     {
        printf(" %d \n",i);
    }
}
    
}
int isprime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return(0);
        
    }
    
    return(1);
}