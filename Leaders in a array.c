#include <stdio.h>
int main() 
{
int arr[10];
int Largest = arr[0];
int n=10,i,j;
for(int i=0;i<n;i++)
{  
        printf("Enter the  %dth element of array :",i);
        scanf("%d",&arr[i]);
}
printf("\n");
for(int i=0;i<10;i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
for(int i=0;i<10;i++)
{
    if(Largest>arr[i])
    {
        printf("\n%d is a leader because no one if greater on the right side ",Largest);
    }
    else
    {
printf("\n%d is a not leader because some element are  greater on the right side ",Largest);
        Largest=arr[i];
        
    }
   
}



    return 0;
}