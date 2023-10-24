#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gameLogic();
int userScoreLogic();
int computerScoreLogic();

int gameLogic(int userWeapon, int computerWeapon, int userScore, int computerScore){
	if
	(userWeapon == 1 && computerWeapon == 2 || 
     userWeapon == 2 && computerWeapon == 3 || 
     userWeapon == 3 && computerWeapon == 1)
      	{
		printf("The computer won this round\n");
		return 1;
   		}
    else if
	(userWeapon == 2 && computerWeapon == 1 || 
     userWeapon == 3 && computerWeapon == 2 || 
     userWeapon == 1 && computerWeapon == 3)
		{
		printf("Player 1 won this round\n");
		return 2;
    	}
	else if (userWeapon == computerWeapon)
	{
		printf("This round is a draw\n");
	}
	else if (userWeapon == 99){
		printf("You have exited the game successfully\n");
	}
	else{
		printf("Invalid input\n");
	}
}

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
	printf("\nScores:\nYou: %d\nCom: %d", userScore, computerScore);
	

	return 0;
}