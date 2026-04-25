#include <stdio.h>

int main(void)
{
    int no, value = 2;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (value < no) {
        printf("%d ", value);
        value *= 2;
    }

    putchar('\n');
    return 0;
}
