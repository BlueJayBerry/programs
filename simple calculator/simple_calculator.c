#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    double num1;
    double num2;
    double ans;
    char proceed;
    char operator;

	do{
		//prompt
		printf("Enter a operator:\nadd         (+)\nsubtract    (-)\ndivide      (/)\nmultiply    (*)\n");
		printf("square      (s)\nsquare root (r)\nlogarithm   (l)\n");
		scanf(" %c", &operator);

		//square root
		if(operator == 'r'){
			printf("First number: ");
			scanf("%lf", &num1);
			ans = pow(num1,0.5);
			printf("%.2lf\n",ans);
		}//logarithms
		else if(operator == 'l'){
			printf("First number: ");
			scanf("%lf", &num1);
			ans = log10(num1);
			printf("%.2lf\n",ans);
		}//square
		else if(operator == 's'){
			printf("First number: ");
			scanf("%lf", &num1);
			ans = num1 * num1;
			printf("%.2lf\n", ans);
		}//when no valid operator is selected
		else if(operator == '+' || operator == '-' || operator == '*' || operator == '/' ){
			printf("First number: ");
			scanf("%lf", &num1);
			printf("Second number: ");
			scanf("%lf", &num2);

			//arithmetic
			switch (operator)
			{
			case '+':
				ans = num1 + num2;
				printf("%.2lf\n",ans);
				break;
			case '-':
				ans = num1 - num2;
				printf("%.2lf\n",ans);
				break;
			case '/':
				ans = num1 / num2;  
				printf("%.2lf\n",ans);
				break;
			case '*':
				ans = num1 * num2;
				printf("%.2lf\n",ans);
			default:
				break;
			}
		}
		else{
			printf("Invalid Input\n");
		}

		do{
			printf("do you have any more operations to make?\n");
			scanf(" %c", &proceed);
			proceed = toupper(proceed);
		}while(!(proceed == 'Y' || proceed == 'N'));

	}while(proceed == 'Y');

}  