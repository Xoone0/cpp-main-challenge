#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    // 依次判断 0、正数、负数
    if (no == 0) {
        printf("该整数为 0。\n");
    } else if (no > 0) {
        printf("该整数为正数。\n");
    } else {
        printf("该整数为负数。\n");
    }

    return 0;
}