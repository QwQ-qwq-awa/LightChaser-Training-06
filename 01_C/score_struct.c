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
    sj = malloc( n * sizeof(sj));
    for(int i = 0; i <= n-1; i++)
    {
        printf("请输入第%d个同学名字",i + 1);
        scanf("%d",&sj[i].name);
        printf("请输入第%d个同学分数",i + 1);
        scanf("%d",&sj[i].score);
    }


    free(sj);
    sj = NULL;
    return 0;
}