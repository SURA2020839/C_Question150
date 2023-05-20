// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int a,b,c,d ;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("Enter the value of c :");
    scanf("%d",&c);
    printf("Enter the value of d :");
    scanf("%d",&d);
    if(a>b&&a>c&&a>d)
    {
        printf("%d is the largest",a);
    }
    else
    {
    if(b>a&&b>c&&b>d)
    {
        printf("%d is the largest",b);
    }
   else
   {
       if(c>a&&c>b&&c>d)
       {
           printf("%d is the largest ",c);
       }
       else
       {
           printf("%d is the largest ",d);
       }
   }
}
}