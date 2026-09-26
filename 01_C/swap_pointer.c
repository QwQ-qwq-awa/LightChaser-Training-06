#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入两个数：a和b ");
    scanf("%d %d",&a,&b);
    printf("你输入的两个数为a=%d,b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("交换后为a=%d,b=%d",a,b);
    return 0;
}