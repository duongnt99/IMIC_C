#include <stdio.h>
#include <stdint.h>
#include <unistd.h>  // để dùng sleep()
// cách 1
// int main(){
//     uint8_t PORTA = 0x00; // cho portA = 0000 0000
//     /* cho chân số 0 là red
//        chân số 3 là yellow
//        chân số 7 là blue
//       */  
//     // bật led chân số 0(red)
//     while (1){
//     PORTA |= (1<<0); // 0000 0001
//     PORTA &= (1<<0); // tắt yellow, blue
//     printf("red: %02X\n",PORTA);

//     // tắt led chân số 0 và bật chân số 3
//     PORTA ^= (1 << 0) | (1 << 3);  // 0000 1000
//     printf("yellow: %02X\n",PORTA);

//     // tắt led chân số 3 và bật chân số 7 
//     PORTA ^= (1 << 3) | (1 << 7); //  1000 0000
//     printf("blue: %02X\n",PORTA);

//     // tắt led sô 7 và bật led sô 0
//     PORTA ^= (1 << 7); 
//     }
//     return 0;
// }

// cách 2
int main() {
    uint8_t PORTA = 0x00; // tắt toàn bộ chân led 0000 0000
    /* cho chân số 0 là red
        chân số 3 là yellow
        chân số 7 là blue  */

     while (1) {
        //chân 0 sáng (Đỏ sáng)
        PORTA |= (1<<0);      // bật đỏ       0000 0001
        PORTA &= (1<<0); // tắt vàng, xanh    0000 0001
        printf("Red:    %02X\n", PORTA);  //  0000 0001
        printf("Gia tri bit sang do tat xanh, vang: ");
        for (int i = 7; i>=0;i--){
        printf("%d",(PORTA >> i) & 1);
        }
        printf("\n");
        sleep(1);


        // chân số 3 sáng (Vàng sáng)
        PORTA |= (1<<3);      // bật vàng     0000 1001
        PORTA &= (1<<3); // tắt đỏ, xanh      0000 1000
        printf("Yellow: %02X\n", PORTA);  //  0000 1000
        printf("Gia tri bit sang vang tat xanh, do: ");
        for (int i = 7; i>=0;i--){
        printf("%d",(PORTA >> i) & 1);
        }
        printf("\n");
        sleep(1);

        // chân số 7 sáng (Xanh sáng)
        PORTA |= (1<<7);      // bật xanh     1000 1000
        PORTA &= (1<<7); // tắt đỏ, vàng      1000 0000
        printf("Green:  %02X\n", PORTA);  //  1000 0000
        printf("Gia tri bit sang xanh tat vang, do: ");
        for (int i = 7; i>=0;i--){
        printf("%d",(PORTA >> i) & 1);
        }
        printf("\n");
        sleep(1);
    }
    
    return 0;
}

// cách 3
// int main(){
//     uint8_t PORTA = 0x00;
//     while(1){
//         PORTA = (1 << 0);
//         printf("red: %02X\n",PORTA);
//         sleep(2);
//         PORTA = (1 << 3);
//         printf("yellow: %02X\n",PORTA);
//         sleep(2);
//         PORTA = (1 << 7);
//         printf("blue: %02X\n",PORTA);
//         sleep(2);
         
//     }
//     return 0;
// }