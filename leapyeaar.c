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
int year;

printf("Enter a year:");
scanf("%d",&year);

if(year % 400 == 0)
{
    printf("%d is a leapyear\n",year);
}
else if(year % 100 == 0)
{
    printf("%d is not a leapyear\n",year);
}
else if(year % 4 == 0)
{
    printf("%d is a leapyaer\n",year);
}
else
{
    printf("%d not a leap year\n",year);
}

}


