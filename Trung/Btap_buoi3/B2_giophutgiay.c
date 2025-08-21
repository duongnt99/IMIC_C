#include <stdio.h>
int main()
{
    int ss,h,m,s;
    
    printf("Nhap so giay: ");
    scanf("%d", &ss);
    
    h = ss/3600;
    m=(ss%3600)/60;
    s=ss%60;
    printf("Thoi gian sau khi quy doi %02d:%02d:%02d",h,m,s);
    
    return 0;
}