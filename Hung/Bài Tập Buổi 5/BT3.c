#include <stdio.h>
int main(){
    for(int i =1; i <= 10000;i++) // chạy từ 1 -> 10000
    {
        int sum = 0; // tổng của ước
        for (int j = 1; j <= (i/2); j++)  
        {
            if(i % j == 0)
            {
            sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}