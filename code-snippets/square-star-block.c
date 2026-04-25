#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("请输入一个整数：");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
