#include <stdio.h>
#define VELIKOST 1000

int main()
{
    int posun = 0;
    int cislo = 0;
    char text[VELIKOST];
    char text2[VELIKOST];
    char test[VELIKOST];
    int i = 0;
    int j = 0;
    char p;
    int abeceda;
    
    //printf("Pokud chcete dešifrovat zmáčkněte enter a do pole POSUN napište 0.\n");
    //scanf("%d", &cislo);
    
    printf("Zadejte zprávu pro dešifrování:\n");
    scanf("%[^\n]s", text);
     
    printf("Zadejte posun: \n");
    scanf("%d", &posun);

    printf("Vstup: %s\n", text);
    for(i = 0; text[i] != '\0'; i++){      //tenhle for převede písmena textu na ASCII
        p = text[i]; //p = ASCII hodnota písmene na text[i]
        if(p != 32){ //ignorovat mezery
            p = (p - posun);
            if (p < 97) {
                //thumb = ((122 - 97) + 1);
                abeceda = 26;
                p = (p + abeceda);
            }
            text2[j] = p; 
            j++;
        }
    }
    printf("Výstup: %s\n", text2);
}
