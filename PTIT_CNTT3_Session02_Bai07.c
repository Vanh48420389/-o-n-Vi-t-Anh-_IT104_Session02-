//
// Created by Lenovo on 19/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;
    int number;

    printf("nhap so phan tu :");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Khong the cap phat bo nho");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("nhap phan tu thu %d", i + 1);
        scanf("%d", arr[i]);
    }




}