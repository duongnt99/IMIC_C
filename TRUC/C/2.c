//chuyen doi giay thanh gio:phut:giay
#include<stdio.h>
int main (){
    int giay, h, m, s;
    printf("nhap so giay:");
    scanf("%d",&giay);
    h = giay/3600;
    m = (giay%3600)/60;
    s = giay % 60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}