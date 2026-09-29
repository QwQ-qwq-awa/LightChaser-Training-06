#include<stdio.h>
int main()
{
    //多分支的判断与do while应用,不知道写啥注释
    int a,b,c,d;
    printf("输入你想计算的法则:(加法请输入1,减法请输入2,乘法请输入3,除法请输入4,求余请输入5)");
    scanf("%d",&c);
    if(c == 1)
    {
        printf("你选择了加法\n");
        printf("输入两个数字：");
        scanf("%d %d",&a,&b);
        d = a + b;
        printf("结果是：%d\n", d);
    }
    else if(c == 2)
    {
        printf("你选择了减法\n");
        printf("输入两个数字：");
        scanf("%d %d",&a,&b);
        d = a - b;
        printf("结果是：%d\n", d);
    }
    else if(c == 3)
    {
        printf("你选择了乘法\n");
        printf("输入两个数字：");
        scanf("%d %d",&a,&b);
        d = a * b;
        printf("结果是：%d\n", d);
    }
    else if(c == 4)
    {
        printf("你选择了除法\n");
        do
        {
            printf("输入两个数字：");
            scanf("%d %d",&a,&b);
            if(b == 0)
            {
                printf("除数不能为零，请重新输入\n");
            }
        }while(b == 0);
        d = a / b;
        printf("结果是：%d\n", d);
    }
    else if(c == 5)
    {
        printf("你选择了求余\n");
        do
        {
            printf("输入两个数字：");
            scanf("%d %d",&a,&b);
            if(b == 0)
            {
                printf("除数不能为零，请重新输入\n");
            }
        }while(b == 0);
        d = a % b;
        printf("结果是：%d\n", d);    
    }
    else
    {
        printf("输入错误，请重新输入\n");
    }
    return 0;
}