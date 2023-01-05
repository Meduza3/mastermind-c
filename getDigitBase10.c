#include "funkcje.h"

int getDigitBase10(int n, int digit){
    
    for(int i=1; i< digit; i++){
        n = n/10;
    }

    return n%10;
}