#include <stdio.h>

void show_static(void)
{
    static double arr[10];
    int i;

    printf("静态数组内容:\n");
    for (i = 0; i < 10; i++)
        printf("[%d] = %.1f\n", i, arr[i]);
}

int main(void)
{
    show_static();
    return 0;
}
