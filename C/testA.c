/*
打印所有水仙花数
By WeepingDogel
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,n = 0;
    printf("水仙花数有:\n");
    for(n=100;n <= 999; n++)
    {
        a = n % 10;
        b = n / 10 % 10;
        c = n / 100 % 10;
        if (pow(a,3)+pow(b,3)+pow(c,3) == n)
        {
            printf("%d\n",n);
        }
    }
}