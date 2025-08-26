#include <stdio.h>
int main(){
    int a,b;
    printf("nhap so nguyen a:");
    scanf("%d",&a);
    printf("nhap so nguyen b:");
    scanf("%d",&b);
    int sosanh = (a > b);
    printf("so %d lon nhat",sosanh ? a : b);
    return 0;
}