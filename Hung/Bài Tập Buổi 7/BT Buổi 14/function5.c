#include<stdio.h>

void chiaPhanTu(int *arr, int size, int divisor, int *quotients, int *remainders)
{
    if (divisor == 0)
    {
        printf("Chia cho 0\n");
        return;
    }
    for (int i = 0; i < size; i++)
    {
        *(quotients+i) = *(arr+i) / divisor; //Tính thương
        *(remainders+i) = *(arr+i) % divisor; //Tính số dư
    }
}
int main()
{
    int my_arr[] ={10,15,24,27,30};
    int n = sizeof(my_arr)/ sizeof(my_arr[0]);

    int divisor = 5;

    int quotients_result[n];
    int remainders_result[n];

    chiaPhanTu(my_arr, n, divisor, quotients_result, remainders_result);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", my_arr[i]);
    }
    
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", quotients_result[i]);
    }
    
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", remainders_result[i]);
    }
    
    printf("\n");
    return 0;
}