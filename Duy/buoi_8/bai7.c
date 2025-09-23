#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr;
    int n;
    char sentence[] = "";
    char ten[256];
    int tuoi;
    float diem;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    fptr = fopen("student.txt", "w");
    if(fptr == NULL){
        printf("Khong the mo file");
        exit(1);
    }
    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    fptr = fopen("student.txt", "a");
    for(int i=1; i<=n; i++){
        printf("Sinh vien thu %d: \n", i);
        printf("Ten: ");
        fgets(ten, sizeof(ten), stdin);
        ten[strcspn(ten, "\n")] = '\0';
        printf("Tuoi: ");
        scanf("%d", &tuoi);
        printf("Diem: ");
        scanf("%f", &diem);
        getchar();
        fprintf(fptr, "%s %d %.2f\n", ten, tuoi, diem);
    }
    fclose(fptr);
    return 0;
}