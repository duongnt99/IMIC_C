#include <stdio.h>

int so_hoan_hao(int n){
    int tong = 0;
    for(int i=1; i<=(n/2); i++){
        if((n%i)==0){
            tong += i;
        }
    }
    return tong;
}

int main(){
    for(int i=1; i<=10000; i++){
        int tong = so_hoan_hao(i);
        if(i==tong){
            printf("%d là số hoàn hảo\n", i);
        }
    }
    return 0;
}