// Bài tập 4: Tìm kiếm nhị phân (Binary Search) trên mảng đã sắp xếp
// •	Đề bài: Cho một mảng đã được sắp xếp tăng dần và một giá trị x, tìm xem x có trong mảng hay không. 
// Sử dụng thuật toán Tìm kiếm nhị phân.
#include<stdio.h>

int binarySearch(int arr[], int n, int x)
{
    int left = 0, right = n-1;
    while (left <= right)
    {
        int mid = (left+right)/2; //lấy chỉ số ở giữa
        if (arr[mid] == x)
        {
            return mid; // tìm thấy x
        }
        else if (arr[mid]<x)
        {
            left = mid+1; //x nằm bên phải
        }
        else{
            right = mid-1; //x nằm bên tay trái
        }
        
    }
    return -1;
}

int main()
{
    int n, i, x;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n;i ++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    
    int result = binarySearch(arr, n, x);
    if (result != -1)
    {
       printf("%d o vi tri index = %d\n", x, result);
    }
    else{
        printf("khong tim duoc x");
    }

    return 0;
    
}


// Linear search: tìm kiếm tuyến tính thì duyệt mảng có n phần tử, mà truy xuất 1 phần từ thì là O(1)
// -> độ phức tạp là o(n)

// binarySearch có while, mỗi khi mà so sánh thì chúng ta loại bỏ một nửa mảng
// bđ có n phần tử, sau lần 1, n/2, sau lần 2, n/4, lần 3, n/8

// K lần lặp thì số phần tử chỉ là n/2^k 
// Khi chỉ còn 1 phần tử (khi tìm thấy) n/2^k =1 -> 2^k = n -> k =log2(n)