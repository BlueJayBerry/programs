#include <stdio.h>
#include <math.h>

int main(){
    int num1 = 4;
    int num2 = 1;
    int ans;
    char proceed;
    char operator;

    //prompt
    printf("Enter a operator:\nadd         (+)\nsubtract    (-)\ndivide      (/)\nmultiply    (*)\n");
    printf("square      (s)\nsquare root (r)\nlogarithm   (l)\n");
    scanf("%c",&operator);
    //square root
    if(operator == 'r'){
		printf("First number: ");
        scanf("%d", &num1);
		ans = sqrt(num1);
		printf("%d",ans);
    }//logarithms
    else if(operator == 'l'){
		printf("First number: ");
        scanf("%d", &num1);
		ans = log(num1);
    }//square
    else if(operator == 's'){
		printf("First number: ");
        scanf("%d", &num1);
		ans = num1 * num1;
    }
    else{
        printf("First number: ");
        scanf("%d", &num1);
        printf("Second number: ");
        scanf("%d", &num2);

        //arithmetic
        switch (operator)
        {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '/':
            ans = num1 / num2;  
            break;
        case '*':
            ans = num1 * num2;
    
        default:
            break;
        }
    }
    
}