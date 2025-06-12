#include<stdio.h>
#include<math.h>



int dec2b(int decNum) {
    int ans = 0, pow = 1;

    while ( decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;


        ans += (rem * pow);
        pow *= 10;

    }
    return ans;
}


int main(){

    int n = 3;
    int n2 = n;
    // printf("Enter no to convert to binary");
    // scanf("%d", &n);

    int bin = 0;
    int c = 1;
    while(n>0){
        bin += (n%2)*c;
        n /= 2;
        c=c*10;
    }
    

    printf("%d",bin);

    printf("\na2 = %d", dec2b(n2));



}