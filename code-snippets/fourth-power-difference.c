#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int pow4(int x)
{
    return sqr(sqr(x));
}

int diff(int a, int b)
{
    return (a > b) ? a - b : b - a;
}

int main(void)
{
    int x, y;

    printf("请输入两个整数。\n");
    printf("整数x: ");
    scanf("%d", &x);
    printf("整数y: ");
    scanf("%d", &y);

    printf("x和y的四次方差是%d。\n", diff(pow4(x), pow4(y)));
    return 0;
}
