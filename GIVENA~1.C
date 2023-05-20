#include <stdio.h>
int main() {
int j,a,flag=0;
int arr[100];
for(int i=1;i<100;i+=2)
{
    if(i%2!=0)
    {
        arr[i]=i;
    }
    
 printf("%d ",arr[i]); 
}
printf("\n");
printf("Enter the number: ");
scanf("%d",&a);

    for(j=1;j<=a;j++)
    {
        if(j==a)
        {
            printf("%d",arr[j]);
        }
    }

}


