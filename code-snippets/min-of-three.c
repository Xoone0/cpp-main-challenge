#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main(void)
{
    int a, b, c;

    printf("请输入整数a: ");
    scanf("%d", &a);
    printf("请输入整数b: ");
    scanf("%d", &b);
    printf("请输入整数c: ");
    scanf("%d", &c);

    printf("较小的值为%d\n", min3(a, b, c));
    return 0;
}
