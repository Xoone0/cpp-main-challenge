#include <stdio.h>

#define NUM 10

void rev_intary(const int v[], int n)
{
    int i;
    printf("数组倒序排列为:\n");
    for (i = n - 1; i >= 0; i--)
        printf("v[%d]: %d\n", n - 1 - i, v[i]);
}

int main(void)
{
    int arr[NUM];
    int i;

    printf("为数组赋值\n");
    for (i = 0; i < NUM; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    rev_intary(arr, NUM);
    return 0;
}
