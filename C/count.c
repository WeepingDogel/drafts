#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    float x,y;
    printf("please type the value of x:");
    scanf("%f",&x);
    if(x < 2 * -(PI/2)){
        y = 2 * pow(x,3) + 3 * cos(x) + 5;
        printf("%.4f",y);
    }
    if (x >= 2 * -(PI/2) && x < PI/2)
    {
        y = pow((x -1)/(x+2),3) + 5 * x;
        printf("%.4f",y);
    }
    if(x >= PI/2)
    {
        y = sqrt(x + sin(3*x));
        printf("%.4f",y);
    }
    return 0;
}