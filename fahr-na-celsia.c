#include <stdio.h>
 
int main()
{
    float celsia, fahr;
    int dolni, horni, krok;
    
    dolni = 0;
    horni = 300;
    krok = 5;
    
    fahr = dolni;
    
    while (fahr < horni) {
    celsia = 5 * (fahr + 32) /9;
        printf("%.2f\t%.2f\n", fahr, celsia);
        fahr = fahr + krok;
    }

}
