#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("请输入第一个整数：");
    if (scanf("%d", &a) != 1) {
        printf("输入无效。\n");
        return 1;
    }

    printf("请输入第二个整数：");
    if (scanf("%d", &b) != 1) {
        printf("输入无效。\n");
        return 1;
    }

    printf("请输入第三个整数：");
    if (scanf("%d", &c) != 1) {
        printf("输入无效。\n");
        return 1;
    }

    /* 先判断三个都相等，再判断是否有两个相等 */
    if (a == b && b == c) {
        printf("三个值相同。\n");
    } else if (a == b || b == c || c == a) {
        printf("有两个值相同。\n");
    } else {
        printf("三个值各不相同。\n");
    }

    return 0;
}
