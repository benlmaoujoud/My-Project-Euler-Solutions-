#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>

bool prime(long n);

int main()
{
int i,j;
i=1000000;
int sum;
int flag=0;
while(i>=2 && flag==0)
{
    j=3;
    sum=2;
    if(prime(i)){
    while(j<i && prime(j))
    {
        sum+=j;
        if(sum==i){
            break;
            flag=1;
        }

      j+=2;
    }
    }
    i--;
}

printf("sum= %d",sum);






    return 0;
}
bool prime(long n)
{
    if(n==2 || n==3) return true;

    else
    {
        bool flag=true;
        for(int i=3;i<=sqrt(n) && flag==true;i+=2)
        {
            if(n%i==0)
                flag=false;
        }

        return flag;
    }
}
