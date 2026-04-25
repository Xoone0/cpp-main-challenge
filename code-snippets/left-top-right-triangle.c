#include <stdio.h>

int main(void)
{
    int len, i, j;

    printf("请输入边长：");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 1; j <= len - i + 1; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
