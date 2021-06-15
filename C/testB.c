/*
打印所有水仙花数
By WeepingDogel
*/

#include <stdio.h>

void main()
{
    int n = 0, i = 0, j = 0, k = 0;
    for (n=100;n <= 999; n++)
    {
        i = n / 100;
        j = (n / 10) % 10;
        k = n % 10;
        if (n==(i * i * i + j * j * j + k * k* k))
        {
            printf("%d ", n);
        }
    }
}