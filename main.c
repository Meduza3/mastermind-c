#include "funkcje.h"

int main(void){

    int codes[6*6*6*6]; //Tablica ze wszystkimi możliwymi kodami
    populateCodeList(codes); //Umieszczenie kodów do tablicy

    int currentGuess = 1122; //Strzał komputera w danej turze
    struct results currentResults; //Aktualny strzał

    for(int turn = 1; turn <= 8; turn++){
        printf("Tura %d: Mój strzał to %d\n",turn, currentGuess);

        currentResults = getFeedback(); //Zczytaj wyniki od użytkownika
        if(currentResults.red == 4){
            printf("Wygrałem! Zwycięstwo zajęło mi %d tur.\n",turn);
            break;
        }
        eliminateCodes(codes, currentGuess, currentResults); //Usuń ze zbioru codes wszystkie kody, które nie są zgodne z wynikami currentResults
        currentGuess = makeGuess(codes); //Weź najmniejszy dozwolony kod jako następny strzał
    }
    
    

    return 0;
}