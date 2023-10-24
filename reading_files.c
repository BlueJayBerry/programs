#include <stdio.h>

int main(){

    FILE *pF = fopen("/home/jannel/Documents/poem.txt", "r");
    char buffer[255];

    if(pF != NULL){
        while(fgets(buffer,255,pF) != NULL){
        printf("%s", buffer);
        }
    }else{
        printf("Mission failed\n");
    }

    fclose(pF);

    if(pF != NULL){
        printf("File has been successfully closed\n");
    }
    else{
        printf("\nMission failed, file not closed");
    }
    return 0;
}