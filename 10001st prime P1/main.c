#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>
bool prime(int n);
int main()
{
int i=3;
int count=2;
while(count<10001)
{
  i+=2;
  if(prime(i))
     count++;
}

printf("Count = %d\n",count);
printf("10001st Prime : %d \n",i);

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
