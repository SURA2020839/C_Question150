#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char str[] ="Working with String is Fun ";
 char *ptr=str;
 printf("Enter the position of string :");
 scanf("%d",&i);
 if(i!=0)
 {
 for(i;i<27;i++)
 {
     
     if(*(ptr+(i-1))!=32){
     printf("%c",*(ptr+(i-1)));
     }
     else
     printf("We can not print blank space");
     break;
     
 }
 }
 else
 printf("%s",str );
 return 0;
}