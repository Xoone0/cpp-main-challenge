#include <stdio.h>

int main(void)
{
    int n1, n2;
    int diff;

    printf("请输入第一个整数：");
    scanf("%d", &n1);

    printf("请输入第二个整数：");
    scanf("%d", &n2);

    /* 先比较大小，再计算两个数的差值 */
    if (n1 >= n2) {
        diff = n1 - n2;
    } else {
        diff = n2 - n1;
    }

    printf("它们的差是 %d。\n", diff);

    return 0;
}
