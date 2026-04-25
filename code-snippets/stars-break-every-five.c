#include <stdio.h>

int main(void)
{
    int n, i;

    printf("请输入一个整数：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        putchar('*');
        if (i % 5 == 0)
            putchar('\n');
    }

    if (n % 5 != 0)
        putchar('\n');

    return 0;
}
