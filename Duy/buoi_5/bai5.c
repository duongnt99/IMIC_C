#include <stdio.h>

int so_nguyen_to(int n){
    int m=0;
    if(n<2){
        return 0;
    }
    else{
        for(int i=2; i<=n/2; i++){
            if(n%i == 0){
                m++;
            }
        }
        if(m==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

void thua_so_nguyen_to(int n){
    if(so_nguyen_to(n) != 0){
        printf("Thừa số nguyên tố của %d là: ", n);
    }
    else{
        printf("Thừa số nguyên tố của %d là: ", n);
        for(int i=2; i<=n; i++){
            if(so_nguyen_to(i) != 0){
                if((n%i) == 0){
                    printf("%d, ", i);
                    n = n/i;
                    i = 1;
                }
            }
        }
    }
}

int main(){
    int n;
    printf("Nhập 1 số nguyên dương: ");
    scanf("%d", &n);
    thua_so_nguyen_to(n);
    return 0;
}