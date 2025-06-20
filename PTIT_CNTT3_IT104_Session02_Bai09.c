//
// Created by Lenovo on 20/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int *arr;
    int maxCount = 0;
    int maxItem = 0 ;

    printf("nhap so luong phan tu : ");
    scanf("%d", &n);

    arr = (int*)malloc(sizeof(int)*n);
    if(arr == NULL)
    {
        printf("khong the cap phat bo nho");
        return 1;
    }



    if(n > 0 || n < 1000)
    {
        for(int i = 0; i < n; i++)
        {
            printf("Nhap phan tu thu %d : ",i+1);
            scanf("%d", &arr[i]);
        }

        printf("mang ban dau la :");

        for(int i = 0; i < n; i++)
        {
            printf("%d", arr[i]);
        }

        printf("\n");

        for(int i = 0; i < n; i++)
        {
            int count = 1;
            for(int j = i +1; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            if(count > maxCount)
            {
                maxCount = count;
                maxItem = arr[i];
            }
        }

        printf("phan tu xuat hien nhieu nhat la %d  xuat hien %d lan ", maxItem, maxCount);
    }
    free(arr);
    return 0;

}