#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> 
#define MAXSIZE 100

//stack functions
int isempty(void); 
int isfull(void);
int peek(void);
void push(char data);
char pop(void);

//brackets related functions
bool jeOteviraci(char z);
bool jeZaviraci(char z);
char zaviraciK(char z);

// " related functions
/*
bool jeUVzaviraci(char z);
bool jeUVoteviraci(char z);
*/
char stack[MAXSIZE];     
int top = -1; 
char z;
int j = 0;

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

char pop() {
   char data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

void push(char data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

bool jeOteviraci(char z) {//tyhle funkce nesmi byt na vstupu kvůli závorce 
    if (z == '('){// v apostrofu. Jinak lze cely program dát na vstup a funguje.
        return true;
    }
    else if (z == '['){
        return true;
    }
    else if (z == '{'){
        return true;
    } 
    else{
        return false;
    }
}

bool jeZaviraci(char z) {
    if (z == ')'){
        return true;
    }
    else if (z == ']'){
        return true;
    }
    else if (z == '}'){
        return true;
    } 
    else{
        return false;
    }
}

char zaviraciK(char z) {
    if (z == '('){
        return ')';
    }
    else if (z == '['){
        return ']';
    }
    else if (z == '{'){
        return '}';
    } 
    return z; //??
}
/*
bool jeUVoteviraci(char z){
    if((z == '"') && (j % 2) == 0){
        return false;
    }
    else if((z == '"') && (j % 2) != 0){
        return true;
    }
    return z;
}

bool jeUVzaviraci(char z){
    if((j % 2) != 0){
        return false;
    }
    else{
        return true;
    }
}
*/
int main() {
    bool test, test2, test3, test4;
    char ocekavany, x, chybi;
    int i,p, idk, pog = 0;
    int saliprd = 0;
   
   while((z=getchar()) != EOF) { //prochazi cely text/vstup
       
       test = jeOteviraci(z);
       test2 = jeZaviraci(z);
       
       /*
       if(z=='"'){ //kontroluje uvozovky //chtělo byto ale řešení pomocí stacku
           j++;
       }
       
       if(z=="'"){ //kontroluje uvozovky
           saliprd++;
       }
       */
       
       //test3 = jeUVoteviraci(z);
       //test4 = jeUVzaviraci(z);
       /*
       if(test3 == true){
           push(z);
       }
       else if(test3 == false){
            idk = isempty();
            if(idk == 1){//empty stack
                printf("CHYBA 66 chybi oteviraci \" "); //tady se to musi nahradit errorem
                //exit(0); 
            }   
            pog = pop();
            ocekavany = '"';
            if (z != ocekavany){
                printf("CHYBA 67 ocekava se \" ");
               // exit(0);
            }
       }
       */
       
       if (test == true){ //oteviraci zavorka  
           push(z); //push na stack
       }
       else if (test2 == true){ //zaviraci zavorka 
            i = isempty();
            if(i == 1) {// empty stack
                printf("CHYBA 1 k závorce chybi oteviraci zavorka. "); //tady se to musi nahradit errorem
                exit(0);
            }
            x = pop();
            ocekavany = zaviraciK(x);
            if (z != ocekavany){
                printf("CHYBA 2 ocekava se %c ", ocekavany);
                exit(0);
            }
        }
    }
    
    p = isempty();
    if(p != 1) { //stack is not empty
        chybi = pop();
        printf("CHYBA 3 chybi zaviraci zavorky k %c ", chybi);
        exit(0);
    }
    
    /*
    if((j % 2) != 0){ //kdyz je pocet " dělitelnej 2 bez zbytku -> sudej pocet
        printf("CHYBA 4 chybi znak \'\"\' ");
        exit(0);
    }
    
    if((saliprd % 2) != 0){ //kdyz je pocet ' dělitelnej 2 bez zbytku -> sudej pocet // KURVVA PROC TO NEFUNGUJE
        printf("CHYBA 5 chybi znak \'\'\' ");
        exit(0);
    }
    */
}


/* edge case 
input:
int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}  { te () ] test }

output: CHYBA ocekava se } u písmena 86
ale měla by ocekavat [
*/
