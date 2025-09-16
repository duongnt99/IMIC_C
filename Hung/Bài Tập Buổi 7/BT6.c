#include <stdio.h>
#include <stdint.h>
#include <unistd.h> 
#include <stdlib.h>
#include <time.h>


int read_temperature_sensor(int *temp_value) {
    int r = rand() % 100; // Ngẫu nhiên từ 0-99
    /* 
    giả sử 20% là cảm biến ngắt kết nối  (-2)
           30% là cảm biến chưa sẵn sàng (-1)
           50% là cảm biến đọc thành công (0)
    */
    if (r < 20) { 
        return -2; // cảm biến bị ngắt kết nối (lỗi nghiêm trọng).
    } else if (r < 50) {
        return -1; //  sensor chưa sẵn sàng
    } else {
        *temp_value = rand() % 100; // nhiệt độ sẽ nằm trong 0-99 độ
        return 0; // thành công
    }
}

int main() {
    srand(time(0));

    int nhietdo;
    while (1) {
        int result = read_temperature_sensor(&nhietdo);

        if ( result == 0) {
            printf("Temperature: %d do C\n", nhietdo);
        } else if (result == -1) {
            printf("Sensor not ready, retrying...\n");
        } else if (result == -2) {
            printf("CRITICAL ERROR: Sensor disconnected! Halting system.\n");
            break;
        }

        sleep(1); 
    }

    return 0;
}
