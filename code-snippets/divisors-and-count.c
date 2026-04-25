#include <stdio.h>

int main(void)
{
    int n, i, count = 0;

    printf("请输入一个整数：");
    scanf("%d", &n);

    printf("约数：");
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n共有%d个约数。\n", count);
    return 0;
}
