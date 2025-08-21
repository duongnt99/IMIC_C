//nhap 2 so nguyen a va b, su dung ?: de tim va in ra so lon nhat:
#include<stdio.h>
int main (){
int a,b,max;
printf("nhap 2 so nguyen :");
scanf("%d%d",&a,&b);
max = (a>b)? a:b;
printf("so lon nhat la : %d\n",max);
    return 0;
}