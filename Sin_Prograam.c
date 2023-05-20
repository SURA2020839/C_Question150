#include <stdio.h>
#include<math.h>
float max(int );
int fac(int);


int main() {
    int n;
    float b;
    
    printf("Enter the  number  : ");
    scanf("%d",&n);
    b=max(n);
printf("The value of the returned function is : %f ",b);

}
 float max ( int n)
 {
     int i;
     float a;
     for(i=1;i<=n;i++)
     {
         if(i=pow(2,i)) {
         printf(" %d \n ", i);
         printf("void \n ");
         }
         else
         {
          a=pow(i,i)/fac(i) ;
         }
     }
     return (a);
     
 }
 int fac(int i)
 {
     int a=1,b ;
     if (i=1)
     return(1);
     else
     {  
         for(b=1;b<=i;b++)
         if (i>0)
    
         a= a  * (i-b) ;
         
     }
     
     printf("The value of a is %d",a);
     
     
 }
 