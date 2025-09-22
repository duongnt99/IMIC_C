#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr;
    float diem;
    float sum = 0;;
    int count = 0;
    float average;
    char ten[256];
    int tuoi;
    fptr = fopen("student.txt", "r");
    if(fptr == NULL){
        printf("Khong mo duoc file");
        exit(1);
    }

    while(fscanf(fptr, "%99[^0-9] %d %f", ten, &tuoi, &diem) == 3){
        printf("Da doc: Ten: %s, Tuoi: %d, Diem: %.2f\n", ten, tuoi, diem);
        sum += diem;
        count++;
    }

    if(count > 0){
        average = sum/count;
        printf("Tong so sinh vien la: %d\n", count);
        printf("Diem trung binh la: %.2f\n", average);
    }
    else{
        printf("Khong co sinh vien nao");
    }
    return 0;
}