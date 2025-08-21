// mo phong tai khoan ngan hang
#include<stdio.h>
int main(){

    float balance = 1000.0;
    printf("so du hien tai : %.2f\n ",balance);
    // nap tien tai khoan
    balance += 500.0;
    printf("so du hien tai : %.2f\n ",balance);
    // rut tien
    balance -= 200.0;
    printf("so du hien tai : %.2f\n ",balance);
    //tra lai
    balance *= 1.05;  //balance = balance +0.05*balance
    printf("so du hien tai : %.2f\n ",balance);
    return 0;
}

