// Viết chương trình nhập vào hai số thực và một toán tử (+, -, *, /). 
// Sử dụng switch-case để thực hiện phép tính tương ứng và in ra kết quả.
#include <stdio.h>

int main(){
    double a,b;
    char op;

    printf("nhap so thu nhat:");
    scanf("%lf",&a);
    printf("nhap so thu hai:");
    scanf("%lf",&b);
    printf("nhap phep tinh:");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        /* code */
        printf("tong hai so la: %.2lf",a + b);
        break;
    case '-':
        printf("hieu hai so: %.2lf",a-b);
        break;
    case '*':
        printf("tich hai so: %.2lf", a*b);
        break;
    
    default:
    case '/':
        if(b != 0){
        printf("thuong hai so: %.2lf", a/b);
        }
        else{
            printf("loi!");
        }
        break;
    }
    return 0;
}