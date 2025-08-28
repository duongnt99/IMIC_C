#include <stdio.h>

void start(){
    char start_atm[100];
    printf("Vui lòng nhấn để bắt đầu dịch vụ");
    getchar();
}

int ATM(long long int b){
    long long int deposit;
    long long int withdrawal;
    int function;
    printf("Chọn chức năng:\n"
                "1. Check Balance       2. Deposit\n"
                "3. Withdrawal          4.Exit\n");
    scanf("%d", &function);
    getchar();
    switch(function){
        case 1:
            printf("Số dư tài khoản là: %lld\n", b);
            return b;
        case 2:
            printf("Số tiền bạn muốn nạp: ");
            scanf("%lld", &deposit);
            b += deposit;
            printf("Tài khoản của bạn vừa được nạp %lld\n", deposit);
            return b;
        case 3:
            printf("Số tiền bạn muốn rút: ");
            scanf("%lld", &withdrawal);
            if(withdrawal > b){
                printf("Số tiền trong tài khoản bạn không đủ\n");
            }
            else{
                b -= withdrawal;
                printf("Bạn vừa rút %lld\n", withdrawal);
            }
            return b;
        case 4:
            printf("Cảm ơn đã sử dụng dịch vụ!\n");
            start();
    }
}

int main(){
    long long int balance = 0;
    start();
    while(1){
        balance = ATM(balance);
    }
    return 0;
}
