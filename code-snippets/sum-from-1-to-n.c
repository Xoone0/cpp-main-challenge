#include <stdio.h>

int main(void)
{
    int n, sum = 0, i;

    printf("请输入一个整数：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += i;

    printf("1到%d的和是%d。\n", n, sum);
    return 0;
}
