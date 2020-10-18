#include <stdio.h>
#include <stdlib.h>
int pow(int x,int n);
int main()
{

int a,b,c;
int flag=0;
a=1;
while(a<1000/3 && flag==0)
{
    a++;
    b=a;
    while(b<500 && flag==0)
    {
        b++;
        c=1000-a-b;
        if(a*a+b*b==c*c)
            flag=1;

    }

}

    printf("a=%d , b=%d c=%d",a,b,c);




    return 0;
}
int pow(int x,int n)
{
    int p=pow(x,n/2);
    p=p*p;
    if(n%2==0) return p;
    return x*p;
}
