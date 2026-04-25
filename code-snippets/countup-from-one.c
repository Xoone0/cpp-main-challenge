#include <stdio.h>

int main(void)
{
    int i = 1, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (i <= no)
        printf("%d ", i++);

    if (no >= 0)
        putchar('\n');

    return 0;
}
