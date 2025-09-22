#include <stdio.h>

int repository()
{
    printf("dang xu ly du lieu...\n");
    int success = 0;
    if(!success)
    {
        return -1;
    }
    return 0;
}
int service()
{
    int result = repository();
    
    if(result == -1)
    {
        printf("du lieu loi\n");
        return -1;
    }
    return 0;
}
int controller()
{
    printf("controller...handing\n");
    int result = service();
    if(result == -1)
    {
        printf("Loi_ khong the truy cap du lieu\n");
    }
    else
    {
        printf("thanh cong_dư lieu da duoc truy cap\n");
    }
}

int main()
{
    controller();
    return 0;
}