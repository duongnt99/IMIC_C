#include <stdio.h>

int main(){
    int n;
    printf("Nhập N số đầu tiên của dãy Fibonacci: ");
    scanf("%d", &n);
    int before = 0;
    int after = 1;
    if(n==1){
        printf("%d", 0);
    }
    else if(n==2){
        printf("%d, %d ", 0, 1);
    }
    else{
        printf("%d, %d, ", 0,1);
        for(int i=0; i<n-2; i++){
            int x = after;
            after += before;
            printf("%d, ", after);
            before = x;
        }
    }
    return 0;
}