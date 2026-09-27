#include <stdio.h>
void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a,b;
    printf("请输入两个数:a和b ");
    scanf("%d %d",&a,&b);
    printf("你输入的两个数为a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("交换后为a=%d,b=%d",a,b);
    return 0;
}