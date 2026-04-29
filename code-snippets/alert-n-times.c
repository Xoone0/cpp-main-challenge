#include <stdio.h>

void alert(int n)
{
    while (n-- > 0)
        putchar('\a');
}

int main(void)
{
    int n;

    printf("请输入要发出响铃的次数: ");
    scanf("%d", &n);

    alert(n);
    printf("(已发出%d次响铃)\n", n);
    return 0;
}
