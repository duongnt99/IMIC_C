// Bài tập 5&6: Đếm Số dòng, Số từ và Ký tự trong file output.txt
// •	Đề bài: Viết chương trình đọc một file và đếm xem có bao nhiêu dòng trong file đó
// •	Đề bài: Viết chương trình đọc một file, đếm tổng số từ và tổng số ký tự.

// dùng 2 câu lệnh ftell và fseek để làm 
// ftell(FILE *stream) -> trả về vị trí hiện tại của con trỏ file
// fseek(File*, offset, origin) -> di chuyển con trỏ file đến vị trí mới
//offset: số byte dịch chuyển, origin: vị trí gốc để tính offset
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> //for isspace()

int main()
{
    FILE *fptr;
    int c;
    int char_count = 0;
    int word_count = 0;
    int in_word = 0; //gắn cờ để theo dõi có đang ở trong 1 từ hay không

    //Mở file ở chế độ nối
    fptr = fopen("output.txt", "r");

    //Kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    while ( (c = fgetc(fptr)) != EOF ) //mỗi lần đọc 1 ký tự thì biến c lưu giá trị và chạy dần đến cuối file
    {
        char_count++;
        if (isspace(c))//kiểm tra xem ký c có phải khoảng trắng hay không (bao gồm ' ', '\t, \n')
        {
            in_word = 0; // không còn ở trong 1 từ
        }
        else if(in_word == 0)
        {
            in_word = 1;
            word_count++;
        }
        
    }
    
    // Đóng file
    fclose(fptr);

    printf("File co %d ky tu\n",char_count);
    printf("File co %d tu\n",word_count);

    printf("Successful");
    return 0;
    
}