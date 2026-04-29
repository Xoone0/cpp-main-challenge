#include <stdio.h>

#define NUM 10

int search_idx(const int v[], int idx[], int key, int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == key)
            idx[count++] = i;
    }
    return count;
}

int main(void)
{
    int arr[NUM], idx[NUM];
    int key, found, i;

    printf("请输入%d个整数:\n", NUM);
    for (i = 0; i < NUM; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("请输入要查找的值: ");
    scanf("%d", &key);

    found = search_idx(arr, idx, key, NUM);
    if (found == 0)
        printf("未找到与%d相同的值。\n", key);
    else {
        printf("与%d相同的值有%d个，下标分别为: ", key, found);
        for (i = 0; i < found; i++)
            printf("%d ", idx[i]);
        printf("\n");
    }

    return 0;
}
