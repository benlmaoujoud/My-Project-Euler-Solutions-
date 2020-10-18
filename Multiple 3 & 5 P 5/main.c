#include <stdio.h>
#include <stdlib.h>

int main()
{
int sum=0;
int  mul=3;
while(mul<1000)
{
    if(mul%3==0 || mul%5==0)
        sum+=mul;
mul++;
}
printf("sum = %d",sum);

return 0;
}
