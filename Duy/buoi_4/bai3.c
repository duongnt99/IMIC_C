#include <stdio.h>

int main(){
    float a, b;
    char operator;
    printf("Nhập 2 số a và b: ");
    scanf("%f %f", &a, &b);
    getchar();
    printf("Nhập toán tử: ");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        printf("Kết quả là: %.2f", a+b);
        break;
    case '-':
        printf("Kết quả là: %.2f", a-b);
        break;
    case '*':
        printf("Kết quả là: %.2f", a*b);
        break;
    case '/':
        if(b==0){
            printf("b không hợp lệ!");
        }
        else{
            printf("Kết quả là: %.2f", a/b);
        }
        break;
    default:
        printf("Không thực hiện được!");
        break;
    }
    return 0;
}