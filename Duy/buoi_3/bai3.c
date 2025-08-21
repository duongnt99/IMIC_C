#include <stdio.h>

int main(){
    int SoDu = 1000;
    int nap = 500;
    int rut = 200;
    printf("So dư ban đầu là: %f\n", SoDu*0.05);
    SoDu += nap;
    printf("So dư sau khi nạp là: %f\n", SoDu*0.05);
    SoDu -= rut;
    printf("So dư sau khi rútlà: %f\n", SoDu*0.05);
    return 0;
}