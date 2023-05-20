#include<stdio.h>
int main()
{
   int arr[100],i,t;
    
  for(i=1;i<=10;i++)
    {
        arr[i]=i;
        printf("%d \n ",arr[i]);
    }
    for(i=1;i<=10;i=i+2)
    {
       // printf("%d \n ",arr[i]);
        if(arr[i+1]>arr[i])
        {
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
            
            printf("arr[i]= %d and arr[i+1]= %d \n ",arr[i],arr[i+1] );
        }
      }
      
      for(i=1;i<=10;i++)
      {
          printf(" %d ",arr[i]);
      }
}
    
