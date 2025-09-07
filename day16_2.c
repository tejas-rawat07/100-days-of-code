#include<stdio.h>
int main()
{
    int n,rem,sum = 0;
    printf("enter a number");
    scanf("%d",&n);
    int temp = n;

    while(n > 0) {
        rem = n%10;
        sum = (sum * 10) + rem;
        n = n/10;
    }

    printf("reverse of your number is %d\n",sum);

    if(temp == sum) {
        printf("your number is palindrome");
    }
    else {
        printf("your number is not palindrome");
    }

    return 0;
}