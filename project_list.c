#include <stdio.h>

int main(){
    FILE *pF = fopen("/home/jannel/Documents/project_tracker.txt", "r+w");
    char buffer[255];

    fgets(buffer,255,pF);
    printf("%s\n",buffer);

    fclose(pF);
}