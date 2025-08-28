// Đề bài: Tạo một chương trình mô phỏng máy ATM với các chức năng: Kiểm tra số dư, Rút tiền, Nạp tiền, và Thoát (số dư được đặt trước).

#include<stdio.h>

int main()
{
    int choice; //Lựa chọn của chúng ta
    float balance = 500000;
    float amount; // Biến để dùng khi rút tiền, nạp tiền, ...

    do {
        printf("\n Welcome to ATM \n");
        printf("1. Kiem tra so du\n");
        printf("2. Rut tien\n");
        printf("3. Nap tien\n");
        printf("4. Thoat\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("So du la: %2f VND\n",balance);
            break;
        case 2:
            printf("So tien muon rut: ");
            scanf("%f", &amount);

            if (amount>balance)
            {
                printf("So du khong du");
            } else if ((int)amount % 10000 !=0)
            {
                printf("So tien can rut phai la boi so cua 10000");
            }else{
                balance -= amount;
                printf("Giao dich thanh cong. So du con lai: %2f VND\n", balance);
            }
            break;
        case 3:
            printf("So tien can nap: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Giao dich thanh cong. So du moi: %2f VND\n", balance);
            break;
        case 4:
            printf("Cam on ban da lua chon");
            break;
        default:
            printf("Lua chon khong hop le");
        }
    }while (choice!=4);
    
    return 0;
    
}
