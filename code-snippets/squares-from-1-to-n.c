#include <stdio.h>

int main(void)
{
    int n, i;

    printf("请输入一个整数：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d的2次方是%d\n", i, i * i);

    return 0;
}
