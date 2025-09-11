// Viết chương trình nhập vào một số nguyên không âm N và tính N! (N giai thừa). 
// Biết rằng N!=1×2×...×N, và 0!=1
#include <stdio.h>
int main(){
    int n;
    unsigned long long giaithua = 1;
    printf("nhap so nguyen khong am:");
    scanf("%d",&n);
    if(n <0){
        printf("khong phai so nguyen khong am");
        return 0;
    }
    else if(n > 0){
        for(int a = 1;a <= n;a++){
            giaithua *= a;
        }
        printf("so giai thua cua %llu la: %llu",n,giaithua);
    }
    else{
        printf("0! = 1");
    }
    return 0;
}