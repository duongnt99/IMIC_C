//Đề bài: Nhập một số nguyên dương và in ra các thừa số nguyên tố của nó. Ví dụ: 12 = 2 * 2 * 3
//C1: Hàm kiểm tra số nguyên tố và chạy vòng for để in ra những số đó nếu số n chia hết cho số nguyên tố đó
//C2: Dùng while để tối giản các bước.-> B1: Dùng while để thực hiện phép chia N cho 2 đến tận cùng
// Ví dụ: N=54-> sau khi thực hiện while chia cho 2 => N=27
// For(i=3;i<căn27=5.1;i+=2)
// B2: lấy N mới chia cho các số lẻ từ 3 đến căn bậc 2 của N (vì n có một ước > căn bậc  của n thì nó sẽ có một ước < căn bậc 2 của nó)
//B3: Kiểm tra đk nếu N>2 thì chính nó sẽ là một số nguyên tố.

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    printf("%d = ", n);

    //B1: chia n cho 2
    while (n%2 == 0)
    {
        printf("2 * ");
        n = n/2;
    }

    //B2: Chia cho các số lẻ
    for (int i = 3; i <= sqrt(n); i=i+2)
    {
       while (n%i ==0){
        printf("%d * ", i);
        n = n/i;
       }
    }
    

    //Nếu n>2 thì n là một số nguyên tố
    if (n>2)
    {
        printf("%d", n);
    }
    return 0;
    
}