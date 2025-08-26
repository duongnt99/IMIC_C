#include<stdio.h>
int main(){
   double num1, num2, kq;
    char op;
    printf("nhập phép toán:");
    scanf("%lf %c %lf",&num1, &op, &num2);
//cach2 của in : printf("nhap:";)
//                scanf("%lf %c %lf",&num1, &op, &num2);
switch (op){
      case '+':
           printf("ket qua : %.2lf\n",num1+num2);
           break;
        
      case '-':
           printf("ket qua : %.2lf\n",num1-num2);
           break;
      case '*':
           printf("ket qua : %.2lf\n",num1*num2);
           break; 
      case '/':
           if(num2 != 0){
            kq = num1 / num2;
            printf("ket qua : %.2f\n",kq);
           } else {
            printf("ko the chia cho 0\n");
           }
           break;
    default:  
        printf("phep toan ko hop le:\n");
   }
   return 0;
}

