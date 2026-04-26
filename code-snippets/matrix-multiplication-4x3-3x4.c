#include <stdio.h>

int main(void)
{
    int a[4][3], b[3][4], c[4][4] = {0};
    int i, j, k;

    printf("请输入第一个 4 行 3 列矩阵的 12 个元素:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("请输入第二个 3 行 4 列矩阵的 12 个元素:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];

    puts("两矩阵的乘积为：");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%d\t", c[i][j]);
        putchar('\n');
    }

    return 0;
}
