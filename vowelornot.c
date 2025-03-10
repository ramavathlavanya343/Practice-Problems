#include <stdio.h>
/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/
int main()
{

  char ch;

  int lowercase,uppercase;

  printf("Enter a character:");
  scanf("%c",&ch);

  lowercase =(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

  uppercase =(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

  if(lowercase || uppercase)
  {
      printf("Its a Vowel\n");
  }
  else
  {
      printf("Consonant\n");
  }


}


