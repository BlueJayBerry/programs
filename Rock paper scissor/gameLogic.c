#include <stdio.h>

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