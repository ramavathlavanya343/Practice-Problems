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
int dividend,divisor,quotient,reminder;

printf("Enter dividend:");
scanf("%d",&dividend);

printf("Enter devisor:");
scanf("%d",&divisor);

quotient = dividend / divisor;

reminder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", reminder);

    return 0;




}


