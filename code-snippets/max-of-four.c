#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    int max;

    printf("请输入第一个整数：");
    scanf("%d", &a);

    printf("请输入第二个整数：");
    scanf("%d", &b);

    printf("请输入第三个整数：");
    scanf("%d", &c);

    printf("请输入第四个整数：");
    scanf("%d", &d);

    // 先假设 a 最大，再逐个比较更新
    max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    if (d > max) {
        max = d;
    }

    printf("最大值为 %d。\n", max);

    return 0;
}