/*
分数判断成绩 ABCDEF

By WeepingDogel
*/
#include <stdio.h>
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
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'E';
            break;
        }
        printf("The score %.2f is %c \n",score,grade);
    }
    else
    {
        printf("The score %.2f is an Error Value!", score);
    }
}