#include <stdio.h>

int main(void)
{
    int n, i;

    printf("请输入一个整数：");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2)
        printf("%d ", i);

    putchar('\n');
    return 0;
}
