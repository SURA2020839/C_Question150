// #include<stdio.h>
// int main()
// {
//     long int a,b;
//     int c,d=0;
//     printf("Enter the 10 digit ISBN number:");
//     scanf("%ld",&a);

//     for(int i=10;i>=1;i--)
//     {  

//         c= a % 10;
//         d=(c*i)+d;
  
//         printf("The value of remainder is %d\n",c);
//         printf("The value at the 10th place is %d\n",d);
//         b=a/10;
//         printf("\nThe value of divident is %d\n",b);
//         a=b;
//    }

//    if(c%11==0)
//    {
//     printf("The checksum is correct ");

//    }
//    else
//    printf(" NAH ! NAH ! NAH !");

//  }
#include<stdio.h>//cheatcode
#include<conio.h>
int main()
{
	char isbn[15];
	int i, sum = 0;
	printf("\nEnter 10 digit ISBN number : ");
	gets_s(isbn);
	for (i = 0; i <= 9; i++)
	{
		isbn[i] -= 48;/*Converting characters into numerals*/
		sum = sum + ((i + 1)*isbn[i]);/*checking the condition of the ISBN validity*/
	}
	if (sum % 11)/*If not divisble by 11*/
		puts("\nISBN number is wrong.");
	else
		puts("\nISBN number is valid.");
	_getch();
	return 0;
}