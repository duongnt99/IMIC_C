#include <stdio.h>
#include <string.h>

void length_copy(char m[]){
    char destination[100]; 
    int count = 0;
    while(*(m+count) != '\0'){
        *(destination + count) = *(m + count);
        count++;
        if(*(m+count) == '\0'){
            *(destination + count) = *(m + count);
        }
    }
    printf("Độ dài của chuỗi là: %d\n", count);
    printf("Chuỗi sao chép là: %s", destination);
}

int main(){
    char source[] = "Duong Dang Minh Duy";
    length_copy(source);
    return 0;
}