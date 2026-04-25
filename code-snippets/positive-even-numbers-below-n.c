#include <stdio.h>

int main(void)
{
    int i = 0, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (i + 2 < no) {
        i += 2;
        printf("%d ", i);
    }

    putchar('\n');
    return 0;
}
