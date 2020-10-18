#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int i=1;
    int j=1;
    int smallest=0;
    bool flag;
    while(i>0 )
    {
        j=1;
        flag=false;
        while(i%j==0 && j<=20 && flag==false)
        {
            if(j==20)
            {
                smallest=i;
                flag=true;
            }
        j++;
        }
     i++;
        if(smallest!=0)
            i=0;
    }
    printf("The Smallest Multiple : %d ",smallest);







   getch();
}
