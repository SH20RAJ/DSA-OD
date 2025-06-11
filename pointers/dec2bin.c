#include<stdio.h>

int main(){

    int n = 4;
    // printf("Enter no to convert to binary");
    // scanf("%d", &n);

    int bin = 0;
    int c = 1;
    while(n>0){
        bin = bin+ (n%2)*c;
        n = n/2;
        c=c*10;
    }
    

    printf("%d",bin);



}