//
// Created by Lenovo on 19/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;
    int number ;
    int found =0;

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
        scanf("%d", &arr[i]);
    }

    printf("nhap 1 so nguyen bat ki :");
    scanf("%d", &number);

    for (int i = 0; i < n-1 && !found; i++)
    {
        for (int j = i +1; j < n; j++)
        {
            if (arr[i] + arr[j]== number)
            {
                printf("%d + %d = %d", arr[i], arr[j], number);
                found = 1;
                break;
            }
        }
    }

    if (!found)
    {
        printf("khong tim thay cap nao trong mang ");
    }

    free(arr);

    return 0;




}