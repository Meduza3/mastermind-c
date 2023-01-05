#include "funkcje.h"
struct results getFeedback(void){
    int red;
    int white;
    printf("red: ");
    scanf("%d",&red);
    printf("white: ");
    scanf("%d",&white);
    printf("\n");
    struct results feedback;
    feedback.red = red;
    feedback.white = white;
    return feedback;
}