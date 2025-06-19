//
// Created by Lenovo on 17/06/2025.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;
    printf("nhap so phan tu cua mang : ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Không thể cấp phát bộ nhớ!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("mang ban dau la :");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("mang da dao nguoc la:");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    free(arr);

    return 0;
}