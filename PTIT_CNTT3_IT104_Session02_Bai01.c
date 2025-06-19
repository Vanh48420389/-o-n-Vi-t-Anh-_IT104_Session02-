//
// Created by Lenovo on 17/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr= (int* )malloc(n*sizeof(int));


    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n > 0 && n <= 100) {
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

        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        printf("Phan tu lon nhat la: %d\n", max);

        free(arr);
    } else {
        printf("So khong phu hop. Vui long nhap so tu 1 den 100.\n");
    }

    return 0;
}
