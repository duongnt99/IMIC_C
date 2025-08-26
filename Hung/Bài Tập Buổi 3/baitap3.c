#include <stdio.h>
int main(){
    float balance = 1000.0;
    // nap vao 500
    balance += 500;
    printf("sau khi nap:%.f\n",balance);
    // rut ra 200;
    balance -= 200;
    printf("sau khi rut:%.f\n",balance);
    balance = balance + balance*0.05;
    printf("lai suat hien tai:%.2f",balance);
    return 0;
}