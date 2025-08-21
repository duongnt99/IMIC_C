#include <stdio.h>
int main()
{
    float balance = 1000.0;
    printf("So du hien tai: %.2f \n", balance);
    balance +=500.0;
    printf("So du hien tai: %.2f \n", balance);
    balance -=200.0;
    printf("So du hien tai: %.2f \n", balance);
    balance *=1.05;
    printf("So du hien tai: %.2f \n", balance);
    
    return 0;
}