#include <stdio.h>

int main(void)
{
    int a, b;

    printf("请输入第一个整数：");
    scanf("%d", &a);

    printf("请输入第二个整数：");
    scanf("%d", &b);

    if (a < b) {
        printf("%d 小于 %d。\n", a, b);
    } else if (a == b) {
        printf("%d 等于 %d。\n", a, b);
    } else {
        printf("%d 大于 %d。\n", a, b);
    }

    return 0;
}