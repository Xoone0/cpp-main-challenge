#include <stdio.h>

#define NUM 10

int min_of(const int v[], int n)
{
    int i, min = v[0];
    for (i = 1; i < n; i++)
        if (v[i] < min)
            min = v[i];
    return min;
}

int main(void)
{
    int arr[NUM];
    int i;

    printf("请输入%d个整数:\n", NUM);
    for (i = 0; i < NUM; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("最小值为%d\n", min_of(arr, NUM));
    return 0;
}
