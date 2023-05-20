#include <stdio.h>
#include <string.h>

int main()
{   
    
   char arr[16];
   for(int m=0; m<16 ; m++)
   {
        printf("Insert %d digit of a number: ",m);
        scanf(" %c",&arr[m]);
   }

     //= "4567123456789129";
    int length = strlen(arr);
    int e=0 ,f=0;

    int k = (length + 1) / 2; // size of brr
    int l = length / 2;       // size of crr

    int brr[k];
    int crr[l];

    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            brr[i / 2] =2*(arr[i] - '0');
             if(brr[i/2]>=10)
             {
                 brr[i/2]=brr[i/2]-9;
             }
            printf("The value of brr[%d] is %d\n", i / 2, brr[i / 2]);
        }
        else
        {
            crr[i / 2] = arr[i] - '0';
            printf("The value of crr[%d] is %d\n", i / 2, crr[i / 2]);
        }
    }

    // Printing brr
    printf("brr array: ");
    for (int j = 0; j < k; j++)
    {
        e=e+brr[j];
       // printf("%d ", brr[j]);
    }
    printf("%d ",e);

    // Printing crr
    printf("crr array: ");
    for (int n = 0; n < l; n++)
    {
        f=f+crr[n];
      //  printf("%d ", crr[n]);
    }
    printf("%d ",f);
    if((e+f)%10==0)
    {
    printf("\nThe credit card number is valid");
    }
    else
    printf("The credit card number is  not valid");
    return 0;
}
