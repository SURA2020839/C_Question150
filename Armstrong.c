#include<stdio.h>
#include<math.h>
int main()
{
    int d=0,c;
for(int i=1;i<1000;i++)
    {
        while(i>0)
    {
          c = i % 10;

            d = pow(c,3) + d;
            if( i==d )
            printf("%d\n",d);
            i = i / 10 ;

    }
}
}