#include<stdio.h>
int main()
{
    int n;
    int i;
    int rem;
    int sum = 0;
    printf("enter a number");
    scanf("%d",&n);

    while(n > 0) {
        rem = n % 10;
        sum = sum + rem;
        n = n/10;

    }

    printf("the sum of the digits of your number is %d",sum);

    return 0;

}