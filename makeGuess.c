#include "funkcje.h"

int makeGuess(int* codeList){
    for(int i = 0; i < 1296; i++){
        if(codeList[i] != 0) return codeList[i];
    }
    printf("You are cheating.\n");
    return 0;
    
}