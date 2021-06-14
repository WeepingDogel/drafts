/*
冒泡排序 
C 语言实例
By WeepingDogel
*/
#include<stdio.h>

void sort(int arr[],int len)
{
    int i,j,temp;
    for(i = 0; i < len - 1; i++)
    {
        for(j = 0; j < len - 1 - i;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] =temp;
            }
        }
    }
}
int main()
{
    int n1,n2,n3,n4;
    printf("type four numbers:");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    int arr[] = {n1,n2,n3,n4};
    int len;
    len = (int)sizeof(arr) / sizeof(*arr);
    sort(arr,len);
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}