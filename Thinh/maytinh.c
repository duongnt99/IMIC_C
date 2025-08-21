#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Nhap phep tinh:");
    scanf("%lf %c %lf",&num1,&op,&num2);

    switch (op)
    {
    case '+':
        printf("dap an la:%.2lf",num1+num2);
        break;
    case '-':
        printf("dap an la:%.2lf",num1-num2);
        break;
    case '*':
        printf("dap an la:%.2lf",num1*num2);
        break;
    case '/':
        if(num2!=0)
        {
            printf("dap an la:%.2lf",num1/num2);
            break; 
        }
        else printf("Loi");
        break;    
    default:
        printf("khong hop le");
    }
    return 0;
}  