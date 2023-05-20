#include <stdio.h>
int main() 
{
    static int m;
    static int l;
    static int o;
    static int p;
    
int i,n=25,arr[100];
for(i=0;i<=19;i++)
{
    arr[i]=i+1;
    printf("%d\n",arr[i]);
}
    for(i=20;i<=25;i++)
    {
        arr[i]=(i-1)-(n);
        printf(" %d\n ",arr[i]);
        
    }
    
    for(i=1;i<=25;i++)
    {
    if(arr[i]%2==0)
    {
         //printf(" \n The %d  is a even number ",arr[i]);
     m++;
    }
     if(arr[i]%2!=0)
     {
         l++;
     }
    
}
    for(i=1;i<=25;i++)
    {
    if(arr[i]>0)
    {
        /*printf(" \n The number %d is positive ",arr[i]); */    o++;
    }
    if(arr[i]<0)
    {
      //printf("The negative numbers are %d \n negative \n ",arr[i]); 
      p++;
    }
}
    printf("Negative number are %d \n ",p);
    printf("Positive number are %d \n ",o);
    printf("Even number are %d \n ",m);
    printf("Odd number are %d \n ",l);
}