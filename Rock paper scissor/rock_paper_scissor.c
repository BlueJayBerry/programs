#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameLogic.h"

int main(){
    int userItem;
    int computerItem; 
	int userScore = 0;
	int computerScore = 0;
 	
	do{
		srand(time(NULL));
		computerItem = rand()%3 +1;

		printf("\nChoose your weapon\n1.Rock\n2.Paper\n3.Scissor\n99.Exit\n");
		printf("Enter here: ");
		scanf("%d", &userItem);
		
		switch (gameLogic(userItem,computerItem,userScore,computerScore))
		{
		case 1:
			computerScore = computerScore + 1;
			printf("Computer Score: %d",computerScore);
			break;
		case 2:
			userScore = userScore + 1;
			printf("User Score :%d",userScore);
			break;
		default:
			break;
		}
	}while(!(userItem == 99));

	if(userScore > computerScore){
		printf("Congrats, you won!");
	}else if(computerScore > userScore){
		printf("Mission failed, we get 'em next time");
	}
	printf("\nScores:\nYou: %d\nCom: %d\n", userScore, computerScore);
	

	return 0;
}