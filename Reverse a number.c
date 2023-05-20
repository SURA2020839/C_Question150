#include<stdio.h>
int main()
{
    int a,d=0,c;
    int n=10;
    printf("Enter number :");
    scanf("%d",&a);
    
    
        while(a>0)
        {
            c=a%10;
            d=d*n+c;
            a=a/10;
        }
        
    printf("%d ",d)
    
    
}