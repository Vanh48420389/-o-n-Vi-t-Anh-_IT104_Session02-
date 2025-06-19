//
// Created by Lenovo on 19/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;


    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Mang khong the cap phat bo nho");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("nhap phan tu thu %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("mang ban dau la :");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Cac phan tu lon hon tat ca phan tu dung sau no la: ");


    for (int i = 0; i < n-1; i++)
    {
        int biggerNum =1;

        for (int j = i+1; j < n; j++)
        {
            if (arr[i] <=  arr[j])
            {
                biggerNum =0;
                break;
            }
        }
        if (biggerNum)
        {
            printf("%d", arr[i]);
        }

    }
    printf("%d\n", arr[n-1]);

    free(arr);
    return 0;
}