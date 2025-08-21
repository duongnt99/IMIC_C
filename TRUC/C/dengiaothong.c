#include<stdio.h>
#include<stdint.h>
#include<unistd.h> // dùng sleep()
int main(){
   uint8_t PORTA = 0x00; // ban đầu đèn tắt hết
   int i;
   // bit 0 : đèn đỏ
   // bit 1 : đèn vàng
   // bit 2 : đèn xanh
   while (1){ //vòng lặp vô tận vì đèn đỏ ko dừng 
    // bật đèn đỏ
    PORTA = (1<<0); // 00000001
    printf("đèn đỏ :");
    for  (i=2; i>=0;i--)
        {printf("%d",(PORTA >> i)& 1);}
    printf("\n");
    sleep(3);// đèn sáng 3 giây
     
    // bật đèn xanh
    PORTA = (1 << 2); // 00000100
    printf("đèn xanh:");
    for (i=2;i>=0;i--)
        {printf("%d",(PORTA >> i)& 1);}
    printf("\n");
    sleep(3);

    //bật đèn vàng
    PORTA = (1<<1);
    printf("đèn vàng:");
    for(i=2;i>=0;i--)
       {printf("%d",(PORTA >> i) & 1);}
    printf("\n");
    sleep(2);
   }

return 0;

}