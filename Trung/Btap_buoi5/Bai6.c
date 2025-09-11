#include <stdio.h>

int main()
{
    int opt;
    float balance = 1000000;
    float withdraw, deposit;
    do {
    printf(" 1. Kiem tra so du \n 2. Rut tien \n 3. Nap tien \n 4. Thoat \n");
    printf("Vui long chon so: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("So du hien tai: %.2f VND\n", balance);
        break;
    case 2:
        printf("Nhap so tien can rut: ");
        scanf("%f", &withdraw);
        if(withdraw>balance) {
            printf("Khong du so du de rut!\n");
        } else if ((int)withdraw%10000!=0) 
        {printf("So tien rut phai la boi so cua 10000VND \n");}
        else {printf("Rut thanh cong! So du moi la: %.2f VND\n", balance -= withdraw);}
        break;
    case 3:
        printf("Nhap so tien can nap: ");
        scanf("%f", &deposit);
        printf("Nap thanh cong! So du moi la: %.2f VND\n", balance += deposit);
        break;
    case 4:
        printf("Cam on quy khach!");   
        break;
    }
    } while (opt!=4);
    return 0;
}
