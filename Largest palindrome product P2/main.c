#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<math.h>
int reverse(int n);
int main()
{
    int res=0;
    int max=0;
    for(int i=100;i<1000;i++)
    {
        for(int j=100;j<1000;j++)
        {
            res=i*j;
            if(Reverse(res)==res)
               {
                   if(res>max) max=res;
               }
        }
    }

printf("Largest Palindrom Product : %d",max);
    return 0;
}
int Reverse(int n)
{
   int sum=0;
   int r=0;
   while(n>0)
   {
       r=n%10;
       sum=sum*10+r;
       n/=10;
   }

    return sum;
}
