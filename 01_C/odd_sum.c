#include<stdio.h>
int main()
{
    int a = 0;
    //for的运用
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 1)//判断是否为奇数
        {
            a += i;
        }
    }
    printf("一到一百的奇数和为: %d", a);
    return 0;
}
    