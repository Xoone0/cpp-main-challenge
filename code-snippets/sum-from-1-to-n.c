#include <stdio.h>

int sump(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main(void)
{
    int n;

    printf("请输入一个整数: ");
    scanf("%d", &n);

    printf("从1到%d的和为%d\n", n, sump(n));
    return 0;
}
