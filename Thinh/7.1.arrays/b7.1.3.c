// Bài tập 3: Sắp xếp mảng bằng thuật toán Bubble Sort
// •	Đề bài: Sắp xếp một mảng số nguyên theo thứ tự tăng dần bằng thuật toán Sắp xếp nổi bọt (Bubble Sort).

#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Thuật toán Bubble Sort
    for (int i = 0; i < n - 1; i++) {           
        for (int j = 0; j < n - 1 - i; j++) {  
            if (arr[j] > arr[j + 1]) {
                // hoán đổi arr[j] và arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // In mảng đã sắp xếp
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
