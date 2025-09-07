#include<stdio.h>
int main()
{
    int binary = 0; 
    int decimal = 0;
    printf("enter the decimal number");
    scanf("%d",&decimal);
    int place = 1;

    while(decimal > 0) {
        int rem = decimal % 2;
        binary = binary + (rem * place);
        decimal = decimal / 2;
        place *= 10;
    }

    printf("BINARY = %d",binary);

    return 0;
}