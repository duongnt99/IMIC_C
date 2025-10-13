// Bài tập 4: Máy tính khoa học mini an toàn
// •	Đề bài: Xây dựng một máy tính bỏ túi cho phép người dùng chọn một trong ba phép toán: sqrt, log, pow. 
// Với mỗi phép toán, hãy nhận đầu vào tương ứng và thực hiện tính toán, đồng thời triển khai kiểm tra errno đầy đủ cho cả EDOM và ERANGE.
#include<stdio.h>
#include<math.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

void calculate_sqrt()
{
    double n;
    printf("Enter number for sqrt: ");
    scanf("%lf", &n);
    errno = 0;
    double res = sqrt(n);
    if (errno)
    {
        perror("Error");
    }
    else{
        printf("Result: %f\n", res);
    }
    
}
void calculate_log()
{
    double n;
    printf("Enter number for log: ");
    scanf("%lf", &n);
    errno = 0;
    double res = log(n);
    if (errno)
    {
        perror("Error");
    }
    else{
        printf("Result: %f\n", res);
    }
}
void calculate_pơw()
{
    double b,e;
    printf("Enter base and exp for pow: ");
    scanf("%lf %lf", &b, &e);
    errno = 0;
    double res = pow(b,e);
    if (errno)
    {
        perror("Error");
    }
    else{
        printf("Result: %f\n", res);
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n 1.Sqrt\n 2. Log\n 3. Pow\n 4. Exit\n Choose: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            calculate_sqrt();
            break;
        case 2:
            calculate_log();
            break;
        case 3:
            calculate_pơw();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid");
        }
    }
    return 0;
    
}