/******************************************************************************

vtipné výsledky generátoru ↓↓↓

*
4.                                                                                                                                                                                 
teké na jak již                                                                                                                                                                    
již navedeme, classroomu, kalendáři                                                                                                                                                
1. ale má Kočová,         

*

klesat                                                                                                                                 
Milí rodiče poděkovat moc                                                                                                              
a i dle jak                                                                                                                            
klesat efektivní COVID že                                                                                                              
jsem rozběhne začne   

*
(ze článku Končí další podivné pololetí na stránkách školy ↓)

kolegové.                                                                                                                              
vlády v zvládáme, máme                                                                                                                 
a a se Je                                                                                                                              
kolegové, sebou se Londýnské,                                                                                                          
dlouho distanční máme již                                                                                                              
za že se nepotkal                                                                                                                      
rozběhne moc než že                                                                                                                    
žáci, dle když populaci                                                                                                                
Je dle i rodiče                                                                                                                        
děti školní Milí všem                                                                                                                  
že se že virová                                                                                                                        
poděkovat moc kromě a                                                                                                                  
podivné Meety výuky sebou                                                                                                              
méně lavic. Nicméně další                                                                                                              
distanční kolegové, populaci klesat                                                                                                    
další žáci, si dobrovolné                                                                                                              
moc za kromě 

*

rok                                                                                                                                    
nejprve naučil nevyužívali. a                                                                                                          
žáků mi zase velmi                                                                                                                     
z velmi bez omezení                                                                                                                    
pracovat Na a rok                                                                                                                      
škola špatné účinně onemocnění                                                                                                         
chození nejprve třeba

*
(ze čl. 56 ústavy ČR)

voličů,
do do kole kole
kandidáti, volby získali získali
druhé získali koná Není-li
volby. získali který kandidáti
začátku začátku oprávněných
*

* 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#define VELIKOST 3000 //3000 char = cca 500 slov

int randoms(int lower, int upper, int count);

//vygeneruje nahodne cislo
int randoms(int lower, int upper, int count) 
{ 
    int i;
    int num;
    for (i = 0; i < count; i++) { 
         num = (rand() % 
           (upper - lower + 1)) + lower; 
        
    } 
    return num; 
}

int main()
{
    char pole[VELIKOST];
    int Zslov[505]; // potřeba implementace výpočtu velikosti pole
    int x = 0; 
    int lower; 
    int upper; 
    int count;
    int Ncislo; //nahodne cislo
    char z; 
    int ps; //pocet slov
    int j,k,i,v;
    int ziskano = 0;
    int cislo; //kolik slov bude basen obsahovat
    
    srand(time(0)); //pomaha genrovat nahod. cislo
    printf("Vložte text:\n");
    scanf("%[^\n]s", pole);
    
    ps = 0;
    i = 1;
    for (j = 0; pole[j] != '\0';j++){ //prochazi text
        if((pole[j-1] == ' ') && (pole[j] != ' ')){ 
            ps++; //pocet slov + 1
            Zslov[i] = j; //zapisuje zacatek slov do jineho pole
            i++;
        }
    }
    
    ps = (ps + 1);
    printf("počet slov: %d\n", ps);
    printf("Kolik slov má mít má báseň? Napište číslo.\n");
    ziskano=scanf("%d",&cislo);
    printf("Zde je moje skovstná báseň: ↓\n");
    
    //gen Ncislo
    Ncislo = 0;
    lower = 1, upper = ps, count = 1; //count vzdy na 1! horni hranice Ncisla = ps
    
    for(v=0; (v < cislo); v++){
        Ncislo = randoms(lower, upper, count); //generating random num
        Ncislo = Ncislo - 1; //kvůli počítání od nuly
        x = Zslov[Ncislo];
            for(; pole[x] != ' '; x++){
                z = pole[x];
                putchar(z);
            }
        z='x';
            if((v % 4) == 0) {
                printf("\n");
            }
            else{
                printf(" ");
            }
    } 
}

