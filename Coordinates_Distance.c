#include <stdio.h>
#include <math.h>
int main() {
int X,Y=0,Z;
float T;
int cord[10][2]=
{   
    {1,11},
    {7,12},
    {34,77},
    {77,83},
    {81,96},
    {92,100},
    {13,19},
    {63,64},
    {95,66},
    {77,98}
};
for(int i=0;i<10;i++)
{
    for(int j=0;j<2;j++)
    {
        printf("%d ",cord[i][j]);
    }
printf("\n");
    }
for(int i=0;i<9;i++)
    {
    X=pow(cord[i+1][0]-cord[i][0], 2) + pow(cord[i+1][1]-cord[i][1], 2);
    Y+=X;
    
    //printf("\n");
    //printf("%d",X);
    //printf("\n");
   
    }   
T=sqrt(Y);
 printf("Total distance beetween these two points are %f ",T);    
}