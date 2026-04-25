#include <stdio.h>

int main(void)
{
    int rows, i, j;

    printf("来做一个金字塔吧!! 请输入行数：");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++)
            putchar(' ');
        for (j = 1; j <= (i - 1) * 2 + 1; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
