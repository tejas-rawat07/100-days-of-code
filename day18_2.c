#include<stdio.h>
int main()
{
    int a,b;
    int i;int hcf;
    printf("enter two number");
    scanf("%d %d",&a,&b);

    int min = (a < b) ? a : b;
    for(i = 1;i <= min;i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;

        }
    }
    printf("HCF = %d",hcf);
    return 0;
}