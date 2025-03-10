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
int i,n;
int fact=1;

printf("Enter the number:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    fact *=i;
}
printf("%d\n",fact);

}


