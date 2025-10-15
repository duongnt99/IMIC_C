#include<stdio.h>

void nhapMang(int *arr, int *size)
{
    printf("Nhap so luong phan tu: \n");
    scanf("%d", size);

    for (int i = 0; i < *size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", arr+i); // Dùng con trỏ để nhập mảng
    }
    
}

void xuatMang(const int *arr, int size)
{
    if (size == 0)
    {
        printf("Mang rong");
        return;
    }
    printf("Phan tu cua mang: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}
void sapXepMang(int *arr, int size)
{
    if (size == 0)
    {
        printf("Mang rong");
        return;
    }
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (*(arr+j) > *(arr+j+1))
            {
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
            
        }
        
    }
    printf("Done");
    
}

int main()
{
    int arr[100];
    int size = 0;
    int choice;
    do
    {
        printf("\n------MENU----\n");
        printf("1. Nhap mang\n");
        printf("2. Xuat mang\n");
        printf("3. Sap xep mang\n");
        printf("4. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            nhapMang(arr, &size);
            break;
        case 2:
            xuatMang(arr, size);
            break;
        case 3:
            sapXepMang(arr, size);
            break;
        case 4:
            printf("Exit");
            break;
        default:
            printf("Error\n");
        }

    } while (choice != 4 );
    return 0;
}