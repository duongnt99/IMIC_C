#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    printf("Nhập 1 chuỗi ký tự bất kì: ");
    fgets(str, 1000, stdin); 
    int n = 0;
    while((*(str+n) != '\0') && (*(str+n) != '\n')){
        n++;
    }
    for(int i=0; i<n/2; i++){
        char a = *(str+i);
        *(str+i) = *(str+n-1-i);
        *(str+n-1-i) = a;
    }
    printf("Chuỗi sau khi đã đảo ngược là: %s\n", str);
    return 0;
}