#include <stdio.h>
/*
分数判断成绩 ABCDEF

By WeepingDogel
*/
int main()
{
    float score;
    char grade;
    printf("please input your score:\n");
    scanf("%f",&score);
    if (score <= 100 && score >= 0)
    {
        switch ((int)(score / 10))
        {
        case 10:
            grade = 'A';
            break;
        case 9:
            grade = 'B';
            break;
        case 8:
            grade = 'C';
            break;
        case 7:
            grade = 'D';
            break;
        case 6:
            grade = 'E';
            break;
        default:
            grade = 'F';
            break;
        }
        printf("The score %.2f is %c \n",score,grade);
    }
    else
    {
        printf("The score %.2f is an Error Value!", score);
    }
}