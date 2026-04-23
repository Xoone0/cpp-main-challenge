#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    // 如果是负数，就转成相反数
    if (no < 0) {
        no = -no;
    }

    printf("绝对值为 %d。\n", no);

    return 0;
}