//
// Created by Lenovo on 19/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;
    int pos;
    int value;

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

    printf("nhap vi tri muon them phan tu (0-%d) :", n);
    scanf("%d", &pos);
    if ( pos >= 0 && pos <= n )
    {
        printf("nhap gia tri muon them");
        scanf("%d", &value);

        arr = (int *)realloc(arr, (n + 1) * sizeof(int));



        for (int i = n; i > pos; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[pos]=value;
        n++;

        int *temp = realloc(arr, n * sizeof(int));
        if (temp != NULL)
        {
            temp =arr;
        }

        printf("mang sau khi them la: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d", arr[i]);
        }



}
    free(arr);

    return 0;
}