// Bài tập 2: Duyệt mảng chỉ bằng con trỏ
// •	Đề bài: Viết chương trình duyệt và in các phần tử của một mảng số nguyên chỉ bằng cách sử dụng con trỏ, không dùng cú pháp arr[i].

#include <stdio.h>

int main(void) {
    int n;

    printf("Nhap so luong phan tu n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So luong khong hop le.\n");
        return 1;
    }

    int arr[n];        /* mảng động tạm thời sử dụng VLA (C99 trở lên) */
    int *p = arr;      /* con trỏ trỏ tới phần tử đầu */

    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; ++i) {
        /* chỉ dùng con trỏ để ghi: arr + i là địa chỉ, nhưng không dùng arr[i] */
        if (scanf("%d", p + i) != 1) {
            printf("Loi nhap.\n");
            return 1;
        }
    }

    printf("Cac phan tu trong mang:\n");
    for (int *q = p; q < p + n; ++q) {
        printf("%d ", *q); /* chỉ dùng dereference con trỏ để đọc */
    }
    printf("\n");

    return 0;
}
