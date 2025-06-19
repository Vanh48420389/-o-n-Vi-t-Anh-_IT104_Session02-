//
// Created by Lenovo on 17/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int pos;
    int value;
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
    printf("nhap vi tri muon sua gia tri (0-%d) :", n-1);
    scanf("%d", &pos);

    if ( pos >= 0 && pos < n )
    {
        printf("nhap gia tri muon sua :  ");
        scanf("%d", &value);
        arr[pos] = value;
    }else
    {
        printf("moi nhap lai vi tri ");
    }
    printf("mang sau khi sua la :");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    free(arr);
    return 0;


}