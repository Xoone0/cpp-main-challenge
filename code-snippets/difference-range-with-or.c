#include <stdio.h>

int main(void)
{
    int a, b;
    int diff;

    printf("请输入整数 A：");
    scanf("%d", &a);

    printf("请输入整数 B：");
    scanf("%d", &b);

    diff = a - b;

    /* 通过逻辑或判断差值的绝对值是否大于 10 */
    if (diff > 10 || diff < -10) {
        printf("它们的差值的绝对值大于 10。\n");
    } else {
        printf("它们的差值的绝对值小于等于 10。\n");
    }

    return 0;
}
