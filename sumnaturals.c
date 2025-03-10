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
int num;
int sum=0;

printf("Enter number:");
scanf("%d",&num);

for(int i=1;i<=num;i++)
{
    sum+=i;
}
printf("%d\n",sum);
return 0;

}


