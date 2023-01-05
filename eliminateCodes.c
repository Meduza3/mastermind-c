#include "funkcje.h"

void eliminateCodes(int* codeList, int guess, struct results answer){
    for(int i = 0; i < 6*6*6*6; i++){
        if(codeList[i]!=0){
            if(calculateFeedback(codeList[i],guess).red != answer.red || calculateFeedback(codeList[i],guess).white != answer.white){
                codeList[i] = 0;
            }
        }
    }
}