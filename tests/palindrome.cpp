#include<iostream>

using namespace std;

int main(){
    vector<int> no = {1,2,1};
    int n = 1234;
    int n2 = n;

    int rn = 0;
    int p = 1;
    while(n>0){
        rn*=10;
        rn+=n%10;
        cout << rn << " n = "<< n << endl;
        n/=10;
        p*=10;
    }

    cout << rn << endl;
    if(rn == n2){
        cout << "palindrome" << endl;
    } else {
        cout << " no palindrome" << endl;
    }
    
    
    
return 0;
}
