#include<stdio.h>
int main()
{
    int n;
    int rem;
    int prod = 1;
    printf("enter a number");
    scanf("%d",&n);

    while(n > 0) {
        rem = n % 10;
        if(rem % 2 != 0) {
            prod = prod * rem;
        }
        n = n / 10;
    }

    printf("product is %d",prod);
    return 0;
}