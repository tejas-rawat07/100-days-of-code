#include<stdio.h>
int main()
{
    int n,rem,sum = 0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp = n;

    while(n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    
    if(temp == sum) {
        printf("your number is armstrong");
    }
    else {
        printf("your number is not armstrong");
    }

    return 0;
}