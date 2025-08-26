
//sử dụng if else lồng nhau
#include<stdio.h>
int main ()
{
   int number;
   printf("nhap so nguyen:");
   scanf("%d",&number);
   if (number>0)
   {
       if(number % 2 == 0)
       {
        printf("so dương chẵn:");
       } else {
        printf("số dương lẻ");
       }
   }
   else if (number<0)
   {
    printf("số âm");
   } else 
   {
    printf("số 0");
   }
   return 0;
}