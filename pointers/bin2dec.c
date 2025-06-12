#include <stdio.h>

int bin2dec(int n){
    int dec = 0, power = 1;

    while (n > 0) {
        int lastno = n % 10;
        printf("lastno %d power %d \n", lastno, power);
        dec += lastno * power;
        printf("dec = %d \n", dec);
        power *= 2;
        printf("power = %d \n", power);

        n /= 10;
        printf("n = %d \n --------------", n);
    }

    printf("\nreturning power = %d ans = %d \n ", power, dec);
    return dec;
}

int main()
{
    int n = 110;
    
    int dec = bin2dec(n);
    printf("Decimal representation: %d \n ",dec );
    
    return 0;
}