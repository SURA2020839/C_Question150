#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{   char c;
    int i,n=2,j;
    char arr[]="4567123456789129";
    int brr[20];
    printf("%s ",arr);

    char *p=arr;

    for (int i = 0; i < strlen(arr); i+=2)
    { 
        printf("%c ",*(p+i));

        c=*(p+i)*(n);
        printf("The value of c is %c \n ",c);

        char brr[i]="c";
        
    }
    for (int j = 0; j < 20; j+=2)
    {
        printf(" the value of brr is %s \n",brr[j]);

    }
    
    


}


