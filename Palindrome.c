//Title: Palindrome
//Description: Takes a string from user and determine if it's a palindrome
#include <stdio.h>
#include <string.h>

int main(){
  char word[20], wordStart_reversed, wordEnd_reversed, reversedWord[20];
  int start, end;

  printf("Enter a word/string");
  scanf("%s", &word[20]);

  start = 0;
  end = -1;
  wordStart_reversed = word[end];
  wordEnd_reversed = word[start];

  do
  {
    reversedWord[start] = wordStart_reversed;
    reversedWord[end] = wordEnd_reversed;
    start = start + 1;
    end = end - 1;
  } while(sizeof(reversedWord) == sizeof(word));
q`

  if (strcmp(reversedWord, word) == 0)
  {
    printf("This is a palindrome");
  }
  else
  {
    printf("This is not a palindrome");
  }

}
