#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>
int main()
{
long long i, n = 60085147541745;
    for (i=3; n > 1; i+=2)
        while (n % i == 0)
            n /= i;

printf("Largest Prime Factor : %lld\n", i - 2);

    return 0;
}

