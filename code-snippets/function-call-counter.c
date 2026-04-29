#include <stdio.h>

void put_count(void)
{
    static int count = 0;
    printf("put_count: 第%d次调用\n", ++count);
}

int main(void)
{
    int n, i;

    printf("请输入调用put_count函数的次数: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        put_count();

    return 0;
}
