#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
int divisors;
int sum=0;
int natNum=0;
int i;
int k=1;
while(k==1)
{

    natNum++;
    sum+=natNum;
    divisors=0;
    i=1;
    while(i<(int)floor(sqrt(sum)))
    {
        if(sum%i==0) divisors+=2;

        if((int)floor(sqrt(sum))*(int)floor(sqrt(sum))==sum) divisors--;

    i++;

    }
if(divisors>500)
        k=0;
}

printf("Sum = %d , Divisors = %d",sum,divisors);


    return 0;
}
