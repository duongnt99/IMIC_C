#include <stdio.h>

int main(){
    unsigned int n;
    printf("Nhập một số N: ");
    scanf("%u", &n);
    long long ketqua = 1;
    if(n==0){
        printf("%u != %d", n, 0);
        return 0;
    }
    else{
        for(int i=1; i<=n; i++){
            ketqua *= i;
        }
    }
    printf("%u != %lld ", n, ketqua);
    return 0;
}