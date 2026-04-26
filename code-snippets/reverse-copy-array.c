#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = {17, 23, 36};
    int b[5];

    // 将 a 数组的值倒序复制到 b 数组
    for (i = 0; i < 5; i++)
        b[i] = a[4 - i];

    puts("  a    b");
    puts("---------");
    for (i = 0; i < 5; i++)
        printf("%4d%4d\n", a[i], b[i]);

    return 0;
}
