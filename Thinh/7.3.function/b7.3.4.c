// Bài tập 4: Tìm ký tự trong chuỗi (trả về con trỏ)
// •	Đề bài: Viết hàm find_char(const char *str, char ch) nhận vào một chuỗi và một ký tự, 
// trả về một con trỏ đến lần xuất hiện đầu tiên của ký tự đó trong chuỗi, hoặc NULL nếu không tìm thấy.

#include <stdio.h>

// Hàm tìm ký tự trong chuỗi
const char* find_char(const char *str, char ch) {
    while (*str != '\0') {         // duyệt từng ký tự trong chuỗi
        if (*str == ch) {          // nếu ký tự khớp
            return str;            // trả về con trỏ trỏ tới vị trí đó
        }
        str++;                     // di chuyển sang ký tự tiếp theo
    }
    return NULL;                   // không tìm thấy
}

int main() {
    char chuoi[100];
    char kyTu;
    
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);   // đọc chuỗi có thể có khoảng trắng
    
    printf("Nhap ky tu can tim: ");
    scanf("%c", &kyTu);
    
    const char *ketQua = find_char(chuoi, kyTu);
    
    if (ketQua != NULL) {
        printf("Tim thay ky tu '%c' tai vi tri thu %ld trong chuoi.\n", 
               kyTu, ketQua - chuoi);
    } else {
        printf("Khong tim thay ky tu '%c' trong chuoi.\n", kyTu);
    }
    
    return 0;
}
