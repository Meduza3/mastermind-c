#include "funkcje.h"

struct results calculateFeedback(int trueCode, int guessCode){
struct results feedback;
    feedback.red = 0;
    feedback.white = 0;
    if(getDigitBase10(trueCode, 1) == getDigitBase10(guessCode, 1)){
        feedback.red++;
    } else if(getDigitBase10(trueCode, 1) == getDigitBase10(guessCode, 2)){
        feedback.white++;
    } else if(getDigitBase10(trueCode, 1) == getDigitBase10(guessCode, 3)){
        feedback.white++;
    } else if(getDigitBase10(trueCode, 1) == getDigitBase10(guessCode, 4)){
        feedback.white++;
    } 

    if(getDigitBase10(trueCode, 2) == getDigitBase10(guessCode, 2)){
        feedback.red++;
    } else if(getDigitBase10(trueCode, 2) == getDigitBase10(guessCode, 1)){
        feedback.white++;
    } else if(getDigitBase10(trueCode, 2) == getDigitBase10(guessCode, 3)){
        feedback.white++;
    } else if(getDigitBase10(trueCode, 2) == getDigitBase10(guessCode, 4)){
        feedback.white++;
    } 

    if(getDigitBase10(trueCode, 3) == getDigitBase10(guessCode, 3)){
        feedback.red++;
    } else if(getDigitBase10(trueCode, 3) == getDigitBase10(guessCode, 1)){
        feedback.white++;
    } else if(getDigitBase10(trueCode, 3) == getDigitBase10(guessCode, 2)){
        feedback.white++;
    } else if(getDigitBase10(trueCode, 3) == getDigitBase10(guessCode, 4)){
        feedback.white++;
    } 

    if(getDigitBase10(trueCode, 4) == getDigitBase10(guessCode, 4)){
        feedback.red++;
    } else if(getDigitBase10(trueCode, 4) == getDigitBase10(guessCode, 1)){
        feedback.white++;
    } else if(getDigitBase10(trueCode, 4) == getDigitBase10(guessCode, 2)){
        feedback.white++;
    } else if(getDigitBase10(trueCode, 4) == getDigitBase10(guessCode, 3)){
        feedback.white++;
    }
    return feedback;
}