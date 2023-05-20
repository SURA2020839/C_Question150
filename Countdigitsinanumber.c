#include<stdio.h>
int main()
{
int c=0,a,b,d,m;
int flag=0;
char l;
printf("Enter the number :");
scanf("%d",&a);
    
if(a>0)
{
    while(a>0)
    {
    b=a%10;
    c=c+b;
    a=a/10;
    }
    printf("%d\n",c);
    
printf("Hey do you want Table of the number if you want enter Y and the number");
scanf("%d",&d);
if(d && d <100)
{
    printf("We are good to go");
    for(int i=1;i<=1000;i++)
    {
        m = d * i;
        if(m<100)
        printf("%d \n",m);

    }
}


}
else
printf("Number must be greater than Zero");


}