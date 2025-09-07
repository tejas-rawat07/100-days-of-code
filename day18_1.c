#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("enter a number");
    scanf("%d",&n);

    for(i = 1;i <= n;i++) {
        if(n % i == 0) {
            printf("FACTORS ARE : %d\n",i);
        }


    }

    return 0;
}