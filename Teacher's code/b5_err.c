// Bài tập 5: Thiết kế hàm có khả năng thử lại
// Đề bài: Viết hàm int unreliable_task() có 70% khả năng thất bại (trả về -1). 
// Trong main, hãy gọi hàm này. Nếu nó thất bại, hãy thử lại tối đa 3 lần. 
// Nếu sau 3 lần vẫn thất bại, hãy thông báo thất bại cuối cùng
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int unreliable_task()
{
    //Trả về một số ngẫu nhiên từ 0-99
    int chance = rand()%100;
    if(chance<70) //70% khả năng
    {
        return -1;
    }
    return 0; //Thành công
}

int main()
{
    srand(time(0)); //Khởi tạo bộ sinh số ngẫu nhiên
    int retries = 3;
    int success = 0;

    for (int  i = 1; i <= retries; i++)
    {
        printf("Lần thử %d of %d...\n", i, retries);
        if (unreliable_task() == 0 )
        {
            printf("Success \n");
            success = 1;
            break;
        }
        else{
            printf("Failed \n");
        }
        
    }

    if (!success)
    {
        printf("Failed after %d \n", retries);
    }
    return 0;
    
}