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

  printf("Enter a characte:");
  scanf("%c",&ch);

  if(ch >='a' && ch <='z'  || ch >='A' && ch <='Z')
  {
      printf("It is a alphabet\n");
  }
  else
  {
      printf("Not a alphabet\n");
  }


}


