#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t PORTB = 0x00;  
    int i = 0;

    while (i < 8) {
        PORTB = 1 << i;   
        
        
        printf("Buoc %d: PORTB = ", i);
        for (int j = 7; j >= 0; j--) {
            printf("%d", (PORTB >> j) & 1); 
        }
        printf("\n");
        i++;
    }

    return 0;
}
