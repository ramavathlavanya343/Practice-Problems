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
int num1;
int num2;
int temp;

printf("Enter num1:");
scanf("%d",&num1);

printf("enter num2:");
scanf("%d",&num2);

//swap first to temp

temp = num1;

num1 = num2;

num2 = temp;

printf("After swapping num1 = %d\n",num1);

printf("After swapping num2= %d\n",num2);

return 0;


}


