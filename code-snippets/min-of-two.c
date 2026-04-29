#include <stdio.h>

int min2(int a, int b)
{
    return (a < b) ? a : b;
}

int main(void)
{
    int a, b;

    printf("请输入整数a: ");
    scanf("%d", &a);
    printf("请输入整数b: ");
    scanf("%d", &b);

    printf("较小的值为%d\n", min2(a, b));
    return 0;
}
