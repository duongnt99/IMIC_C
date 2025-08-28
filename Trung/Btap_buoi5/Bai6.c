#include <stdio.h>

int main()
{
    int opt, balance = 1000000;
    int withdraw, deposit;
    while (1)
    {
    printf(" 1. Kiem tra so du \n 2. Rut tien \n 3. Nap tien \n 4. Thoat \n");
    printf("Vui long chon so: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("So du hien tai: %d \n", balance);
        break;
    case 2:
        printf("Nhap so tien can rut: ");
        scanf("%d", &withdraw);
        printf("Rut thanh cong! So du moi la: %d\n", balance -= withdraw);
        break;
    case 3:
        printf("Nhap so tien can nap: ");
        scanf("%d", &deposit);
        printf("Nap thanh cong! So du moi la: %d\n", balance += deposit);
        break;
    case 4:
        return 0;
    }}
}