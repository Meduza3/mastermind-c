#include "funkcje.h"

void populateCodeList(int* codeList){
    int i = 0;
    for(int a = 1; a <= 6; a++){
        for(int b = 1; b <= 6; b++){
            for(int c = 1; c <= 6; c++){
                for(int d = 1; d <= 6; d++){
                    codeList[i++] = a*1000 + b*100 + c*10 + d;
                }
            }
        }
    }
}