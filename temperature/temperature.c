#include <stdio.h>

/* Print Fahrenheit-Celsuis Table */
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void) {
    float fahr, celsius;
    
    fahr = LOWER;
    
    while(fahr <= UPPER) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f \t %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    
    return 0;
}