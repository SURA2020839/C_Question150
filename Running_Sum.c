 #include <stdio.h>
int runsum(int);

int main()
{
    int i , j , n ,k , a ;
    printf("Enter the number of term for running sum : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf(" %d \n ",i);
    a=runsum(i);
    printf("the running sum  is %d \n " ,a);
    }
}

int runsum(int i)
{
    static int n=0;
    n=n+i;
    return(n);
    
    
} 