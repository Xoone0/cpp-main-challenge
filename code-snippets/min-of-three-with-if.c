#include <stdio.h>

int main(void)
{
    int a, b, c;
    int min;

    printf("请输入第一个整数：");
    scanf("%d", &a);

    printf("请输入第二个整数：");
    scanf("%d", &b);

    printf("请输入第三个整数：");
    scanf("%d", &c);

    /* 先假设 a 最小，再逐个比较更新 */
    min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    printf("最小值为 %d。\n", min);

    return 0;
}
