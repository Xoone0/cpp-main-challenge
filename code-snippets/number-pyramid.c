#include <stdio.h>

int main(void)
{
    int layers, i, j;

    printf("让我们来画一个金字塔。\n");
    printf("金字塔有几层：");
    scanf("%d", &layers);

    for (i = 1; i <= layers; i++) {
        for (j = 1; j <= i - 1; j++)
            putchar(' ');
        for (j = 1; j <= (layers - i) * 2 + 1; j++)
            printf("%d", i % 10);
        putchar('\n');
    }

    return 0;
}
