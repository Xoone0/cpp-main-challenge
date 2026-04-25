#include <stdio.h>

int main(void)
{
    int start, end, step, h;

    printf("请输入开始身高(cm)：");
    scanf("%d", &start);
    printf("请输入结束身高(cm)：");
    scanf("%d", &end);
    printf("请输入间隔(cm)：");
    scanf("%d", &step);

    for (h = start; h <= end; h += step)
        printf("%dcm  %.2fkg\n", h, (h - 100) * 0.9);

    return 0;
}
