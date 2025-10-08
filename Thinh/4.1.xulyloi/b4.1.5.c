// Bài tập 5: Thiết kế hàm có khả năng thử lại
// •	Đề bài: Viết hàm int unreliable_task() có 70% khả năng thất bại (trả về -1). 
//     Trong main, hãy gọi hàm này. Nếu nó thất bại, hãy thử lại tối đa 3 lần. 
//     Nếu sau 3 lần vẫn thất bại, hãy thông báo thất bại cuối cùng

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hàm có 70% khả năng thất bại
int unreliable_task() {
    int r = rand() % 100;  // sinh số từ 0 đến 99
    if (r < 70) {
        return -1; // thất bại
    } else {
        return 0;  // thành công
    }
}

int main() {
    srand(time(NULL));  // khởi tạo seed cho rand()
    int attempt, result;

    for (attempt = 1; attempt <= 3; attempt++) {
        result = unreliable_task();
        if (result == 0) {
            printf("Thành công ở lần thử thứ %d!\n", attempt);
            return 0;
        } else {
            printf("Thất bại ở lần thử thứ %d.\n", attempt);
        }
    }

    printf("Thất bại sau 3 lần thử.\n");
    return 0;
}
