#include <stdio.h>
int main()
{
int i,a,b;
int temp=0;
printf("Enter the number:");
scanf("%d",&a);
while(a>0)
{
b=a%10;
printf("%d\n",b);
temp= 10 * temp+ b;
printf("%d\n",temp);
a=a/10;
}
    
   
         return 0;
}