#include<stdio.h>
#include<stdlib.h>
int main()
{
    //动态变量的设置
    int n;
    printf("输入你想存储的数据总量: ");
    scanf("%d",&n);
    int *sj = malloc( n * sizeof(*sj));//malloc函数
    //循环输入并求和
    float num = 0;
    for(int i = 0; i <= n-1; i++)
    {
        printf("请输入第%d个数",i + 1);
        scanf("%d",&sj[i]);
        num += sj[i];
    }
    //求平均数
    printf("平均数为%f",num/n);
    //释放内存
    free(sj);
    sj = NULL;
    return 0;
}