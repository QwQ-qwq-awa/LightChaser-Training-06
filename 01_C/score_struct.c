#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char name[101];
    float score;
}st;

int main()
{
    int n;
    st *sj;
    printf("输入你想存多少个学生的信息: ");
    scanf("%d",&n);
    sj = (st*)malloc( n * sizeof(st));
    sj = (st *)malloc(n*sizeof(st));
    if(sj == NULL)
    {
        printf("内存分配失败\n");
        return -1;
    }
    for(int i = 0; i <= n - 1; i++)
    {
        printf("请输入第%d个同学名字 ",i + 1);
        scanf("%s",sj[i].name);
        printf("请输入第%d个同学分数 ",i + 1);
        scanf("%f",&sj[i].score);
    }
    printf("存储完毕!\n");
    int a;
    do
    {
        printf("输入你想查询第几个学生的成绩: (输入0退出,输入1000打印全部数据) ");
        scanf("%d",&a);
        if(a == 1000)
        {
            for(int i = 0; i <= n - 1; i++)
            {
                printf("学生姓名:%-15s\t  学生分数:%f\n",sj[i].name,sj[i].score);
            }
        }
        else if(a > 0 && a <= n)
        {
            printf("学生姓名:%s  学生分数:%f\n",sj[a - 1].name,sj[a - 1].score);
        }
        else if((a > n && a != 1000) || a < 0)
        {
            printf("你确定有这个？！\n");
        }
        else
        {
            printf("感谢您的使用,期待下次见面\n");
        }
    } while (a != 0);
    

    free(sj);
    sj = NULL;
    return 0;
}