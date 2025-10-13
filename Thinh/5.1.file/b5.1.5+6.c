#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    int c;
    int line_count = 0;

    //Mở file ở chế độ nối
    fptr = fopen("output.txt", "r");

    //Kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    // Đọc file từng ký tự và đếm dấu \n
    for (c = getc(fptr); c != EOF; c= getc(fptr))
    {
        if (c == '\n')
        {
            line_count++;
        }
        
    }
    
    // Nếu file không rỗng, kiểm tra dòng cuối cùng trong trường hợp file không kết thúc bằng \n
    if (line_count>0 || ftell(fptr)> 0)
    {
        fseek(fptr, -1, SEEK_END); //Di chuyển con trỏ về ký tự cuối cùng trong file
        if (fgetc(fptr) != '\n')
        {
            line_count++; //nếu ký tự cuối cùng không phải \n thì dòng cuối chưa được tính và và line_count cần +1
        }
        
    }
    
    //Xử lý file rỗng
    fseek(fptr, 0, SEEK_END);
    if (ftell(fptr) == 0)
    {
        line_count = 0;
    }
    
    
    // Đóng file
    fclose(fptr);

    printf("%d \n",line_count);

    printf("Successful");
    return 0;
    
}