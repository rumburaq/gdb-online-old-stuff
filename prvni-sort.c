#include <stdio.h>
#define numsSize 5

int main()
{
    int x, i, j, a, b = 0;
    int sqrtArr[numsSize];
    int nums[5] = {-4,-1,0,3,10}; //input
        
    //fills in sqrtArr     
    for(i=0; i < numsSize; i++){
        x = nums[i];
        x = (x * x);
        sqrtArr[i] = x;
    }
    
    //tady uz je pole aqrtArr naplneno jen ho uz seradit a vratit
    for(i = 0; i < numsSize; i++){
        for(j = 0; j < (numsSize-1); j++){
            a = sqrtArr[j];
            b = sqrtArr[j+1];
            
            if(a > b) { //portrbuje swap
                sqrtArr[j] = b;
                sqrtArr[j+1] = a;
            } 
        }
    } 
    
    //return nums;
    printf(" test ");
    for(i=0; i < numsSize; i++){
        x = sqrtArr[i];
        printf("%d ", x);
    }
}

//takhle přesně to mám vložené v leetcode 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int i, j, a, b;
    int x;
    int z, p = 0;
    int sqrtArr[numsSize];
    int sortArr[numsSize];
        
    for(i=0; i < numsSize; i++){
        x = nums[i];
        //printf(" %d ", x);
        x = (x * x);
        //printf("%d", x);
        sqrtArr[i] = x;
        //printf("%d", x);
    }
    
    printf(" test ");
    for(i=0; i < numsSize; i++){
        p = sqrtArr[i];
        printf("%d", p);
    }
    //tady uz je pole aqrtArr naplneno jen ho uz seradit a vratit
    
    for(i = 0; i < numsSize; i++){
        for(j = 0; j < numsSize-1; j++){
            a = sqrtArr[j];
            b = sqrtArr[j+1];
            
            if(a > b) { //potrebuje swap
                sqrtArr[j] = b;
                sqrtArr[j+1] = a;
            } 
        }
    } 
    
    printf(" test2 ");
    for(i=0; i < numsSize; i++){
        p = sqrtArr[i];
        printf("%d", p);
    }
    
    
    return nums; //???
}
*/
