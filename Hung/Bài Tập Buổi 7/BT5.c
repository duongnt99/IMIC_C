// Viết hàm int unreliable_task() có 70% khả năng thất bại (trả về -1). 
// Trong main, hãy gọi hàm này. Nếu nó thất bại, hãy thử lại tối đa 3 lần. 
// Nếu sau 3 lần vẫn thất bại, hãy thông báo thất bại cuối cùng
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int unreliable_task() {
    int r = rand() % 100;  // cho số ngẫu nhiên từ 0-99
    if (r < 50) {
        return -1; // thất bại
    }
    return 0; // thành công
}

int main() { 
    // srand(time(NULL)); // khởi tạo seed cho rand()

    int attempt;
    int result;
    for (attempt = 1; attempt <= 3; attempt++) {
        result = unreliable_task();
        if (result == 0) {
            printf("Thu lan %d: Thanh Cong!\n", attempt);
            break; // Nếu thành công thì thoát tácc vụ
        } else {
            printf("Thu Lan %d: That Bai.\n", attempt);
        }
    }

    if (result == -1) {
        printf(">>> Sau 3 lan thu, tac vu van that bai.\n");
    }

    return 0;
}
