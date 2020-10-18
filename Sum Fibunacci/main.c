#include <stdio.h>
#include <stdlib.h>
#define N 4000000
int main()
{

int a,b,c;
    a=0;
    b=1;
    c=1;
    int sum=0;
    while(c<=N)
    {
        if(c%2 == 0){
                sum+=c;
            }
        a=b;
        b=c;
        c=a+b;
    }
printf("Sum = %d",sum);
    return 0;
}

