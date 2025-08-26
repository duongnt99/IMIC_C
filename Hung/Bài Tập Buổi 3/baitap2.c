#include <stdio.h>
int main(){
    int a;
    int gio,phut,giay;
    printf("nhap tong so giay:");
    scanf("%d",&a);
    gio = a/3600;
    phut = (a%3600)/60;
    giay = a%60;
    printf("%d:%d:%d",gio,phut,giay);
    return 0;
}