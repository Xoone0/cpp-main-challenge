#include <stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main(void)
{
    int x;

    printf("请输入整数: ");
    scanf("%d", &x);

    printf("整数%d的立方为%d\n", x, cube(x));
    return 0;
}
