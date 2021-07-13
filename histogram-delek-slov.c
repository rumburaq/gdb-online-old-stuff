#include <stdio.h>
int main()
{
    int i, z, p;
    int hgram[15]; // histogram - pole s velikostí 15 "buňěk"
    
    for (i = 0; i < 15; i++) {
    hgram[i] = 0; // pole vypadá takhle: [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ...]
    }
    i = 0;
    p = 0; // p jako počet znaků ve slově - jedné buňce
    while ((z = getchar()) != EOF) { // nacita znaky do z do konce souboru
      hgram[i] = (p++);   // pocet znaku ve slove +1 ?
       if (z == ' ') { 
       hgram[i]; // skoc do dalsiho indexu pole? nebo ++hgram[i]; ?
       ++i;
       p = 0; // začne počítat znovu od nuly.
       }  
    }
    printf("cisla = ");
    for(i = 0; i < 15; ++i) {
        printf(" %d", hgram[i]);
    }
}
