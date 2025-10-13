#include <stdio.h>

int main()
{
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("-> Gia tri lon nhat: %d\n", max);
    printf("-> Gia tri nho nhat: %d\n", min);


    for (i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }


    printf("Mang sau khi dao nguoc: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
