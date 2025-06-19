//
// Created by Lenovo on 17/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;
    int number;
    int countNumber =0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0 && n > 100)
    {
        printf("so phan tu phai nam trong khoang 1 den 100 \n ");
        return 1;
    }
    arr = (int *)malloc(n * sizeof(int));

        if (arr == NULL)
        {
            printf("khong the cap phat bo nho");
            return 1;
        }

        for (int i = 0; i < n; i++) {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("Cac phan tu cua mang: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("nhap so can dem");
        scanf("%d", &number);
        for (int i = 0; i < n; i++)
        {
            if (number == arr[i])
            {
                countNumber++;
            }
        }
        printf("so lan xuat hien cua %d la %d",number, countNumber);

    free(arr);
    return 0;

}
