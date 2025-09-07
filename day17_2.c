#include<stdio.h>
int main()
{
    int n;
    int i;
    int flag = 0;
    printf("enter a number");
    scanf("%d",&n);

    for(i = 2;i <= n/2;i++) {
        if(n % i == 0) {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }

    if(flag) {
        printf("the number is not prime");
    }
    else{
        printf("the number is prime");
    }

    return 0;
}

