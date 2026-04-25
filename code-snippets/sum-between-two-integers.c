#include <stdio.h>

int main(void)
{
    int n1, n2, lower, upper, sum = 0;

    printf("请输入两个整数。\n");
    printf("整数1：");
    scanf("%d", &n1);
    printf("整数2：");
    scanf("%d", &n2);

    if (n1 > n2) {
        upper = n1;
        lower = n2;
    } else {
        upper = n2;
        lower = n1;
    }

    // 题意是求“大于较小值且小于较大值”的所有整数之和
    for (int i = lower + 1; i < upper; i++)
        sum += i;

    printf("大于%d且小于%d的所有整数之和是%d。\n", lower, upper, sum);

    return 0;
}
