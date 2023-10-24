#include <stdio.h>

int main(){
    
    /*FILE *pF = fopen("test.txt", "w+a");
    fprintf(pF, "bob");
    fprintf(pF, "\nrobert");
    fclose(pF);*/

    /*if(remove("bob.txt") == 0){
        printf("File deleted successfully");
    }
    else{
        printf("mission failed");
    }*/

    FILE *pF = fopen("/home/jannel/Documents/test.txt", "w");
    fprintf(pF, "mickey mouse\n");
    fprintf(pF, "minnie mouse\n");

    fclose(pF);
    return 0;
}