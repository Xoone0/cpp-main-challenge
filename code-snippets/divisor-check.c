#include <stdio.h>

int main(void)
{
    int x, y;

    printf("请输入第一个整数：");
    scanf("%d", &x);

    printf("请输入第二个整数：");
    scanf("%d", &y);

    // 0 不能作为除数，先单独处理
    if (y == 0) {
        printf("0 不能作为除数。\n");
    } else if (x % y == 0) {
        printf("%d 是 %d 的约数。\n", y, x);
    } else {
        printf("%d 不是 %d 的约数。\n", y, x);
    }

    return 0;
}