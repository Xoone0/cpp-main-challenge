#include <stdio.h>

#define NUM 10

void rev_rcpy(int v1[], const int v2[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        v1[i] = v2[n - 1 - i];
}

int main(void)
{
    int src[NUM], dest[NUM] = {0};
    int i;

    printf("请为原数组赋值:\n");
    for (i = 0; i < NUM; i++) {
        printf("src[%d]: ", i);
        scanf("%d", &src[i]);
    }

    rev_rcpy(dest, src, NUM);

    printf("倒序复制结果:\n");
    for (i = 0; i < NUM; i++)
        printf("dest[%d]: %d\n", i, dest[i]);

    return 0;
}
