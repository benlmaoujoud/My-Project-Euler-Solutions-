#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
bool prime(int n);
int main()
{
    long long sum=2;
    long long i;
    for(i=3;i<=2000000;i+=2)
    {
        if(prime(i))
            sum+=i;
    }
    printf("La somme est : %ll",sum);




    return 0;
}
bool prime(int n)
{
    if(n==2 || n==3) return true;

    else{

    bool flag=true;
    int i=3;
    while(i<=sqrt(n) && flag==true)
    {
        if(n%i==0)
            flag=false;

        i+=2;
    }

    return flag;
       }
}
