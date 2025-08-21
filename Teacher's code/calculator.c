// Bài tập 3: Máy tính đơn giản
// Đề bài: Viết chương trình nhập vào hai số thực và một toán tử (+, -, *, /). 
// Sử dụng switch-case để thực hiện phép tính tương ứng và in ra kết quả.

// int a, b
// +
// -> print a+b
#include<stdio.h>
int main()
{
    double num1, num2;
    char op;

    printf("Nhap phep tinh:");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        printf("Ket qua: %.2lf\n", num1+num2);
        break;
    case '-':
        printf("Ket qua: %.2lf\n", num1-num2);
        break;
    case '*':
        printf("Ket qua: %.2lf\n", num1*num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("Ket qua: %.2lf\n", num1/num2);
        }
        else{
            printf("Khong the chia cho 0");
        }
        
        break;
    default:
        printf("Toan tu khong hop le");
        break;
    }
}
