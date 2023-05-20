#include <stdio.h>
#include <math.h>
int main() {
    int sum=0,n=15;
    float mini,roar,more;
    double randa;
    double SD[3][5];
    int SDM[3][5]=
    { 
        {-6,-12,8,13,11},
        { 6,7,2,-6,-9},
        {-10,11,10,9,2}
        
    };
    
for(int i=0;i<3;i++)
{
    for(int j=0;j<5;j++)
    {
        sum=SDM[i][j]+sum;
      
        
    }
printf("\n");
}
printf("\n%d value of the sum ",sum);


mini = sum / n;

printf("\n%f",mini);

for(int i=0;i<3;i++)
{
    for(int j=0;j<5;j++)
    {
        roar=SDM[i][j]-mini;
        more=pow(roar,2);
        SD[i][j]=more;
    }
}

printf("\nMore will be print from here ");
for(int i=0;i<3;i++)
{
    for(int j=0;j<5;j++)
    {
  //  printf("\n%lf ",SD[i][j]);
    randa=randa+SD[i][j];
    }
    printf("\n ");
}

//printf("\n%lf As you know i am randa ",randa);


double standard_deviation = sqrt(randa/n);

printf("\n%lf",standard_deviation);





    
    return 0;
}