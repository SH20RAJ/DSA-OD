#include<stdio.h>
#include<math.h>
int main(){

    int n = 6;
    // printf("Enter no to convert to binary");
    // scanf("%d", &n);

    int bin = 0;
    int c = 0;
    while(n>0){
        bin = bin+ (n%2)*pow(10,c);
        n = n/2;
        c++;
    }
    

    printf("%d",bin);



}