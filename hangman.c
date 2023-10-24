#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
    int strike = 0;

    char word[] ="ccal";
    
    char hiddenWord[(int)strlen(word)];

    char character = 'i';
    

    //user input
    printf("Guess a letter: ");
    scanf("%c", &character);

    //hidden word
    for(int i = 0; i < (int)strlen(word); i++){
        hiddenWord[i] = (char)95;
    }

    //character checker
    
    for(int i = 0; i < (int)strlen(word); i++){
        if(character == word[i]){
            hiddenWord[i] = word[i];
        } 
        if(true){
            strike+=1;
            printf("Strikkeee %d",strike);
        }
    }
    printf("%s",hiddenWord);

    /*if(character != word){

        printf("Strikkeee %d",strike);
    }*/
    
    


    //Game loop
    if(strike >= 3){
        printf("STRIKE YOU'RE OUT!");
    }
    else if(strike < 3){
        printf("YOU WON!");
    }

}
