#include<stdio.h>
int main()
{ 


    printf("Enter the number you :");
    scanf("%d",&a);
    if(sizeof(a)==4)
    {
        printf("we are good to go");
    }
    else
    {
        printf("We consider integer only");
    }
    
}