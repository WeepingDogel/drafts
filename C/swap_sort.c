/*
输入四个整数按从小到大顺序排序

*p 为指针变量的内容
p 为地址

p = &n; 在指针变量中存储 n 的地址

p 改变的时候 &n 也会改变
*/
#include <stdio.h>
void swap(int *p1, int *p2){
    //指针交换
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}
int main(){
    int n1,n2,n3,n4;
    int *p1,*p2,*p3,*p4;
    printf("Please type four numbers:");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    p1 = &n1;
    p2 = &n2;
    p3 = &n3;
    p4 = &n4;
    printf("四个指针变量地址:\n%p\n%p\n%p\n%p\n",p1,p2,p3,p4);
    if (n1 > n2){
        swap(p1,p2);
    }
    if (n1 > n3){
        swap(p1,p3);
    }
    if (n1 > n4){
        swap(p1,p4);
    }
    if(n2 > n3){
        swap(p2,p3);
    }
    if(n2 > n4){
        swap(p2,p4);
    }
    if(n3 >
     n4){
        swap(p3,p4);
    }
    printf("\n %d %d %d %d",n1,n2,n3,n4);
}
