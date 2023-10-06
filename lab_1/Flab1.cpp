#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int isPrime = 1;
    int x = 3;
    while(isPrime != n){
        int prime = 0;
        for(int i = 1; i <= sqrt(x); i++){
            if(x%i == 0){
                prime++;
            }
        }
        
        if(prime < 2){
            isPrime++;
        }
        if(isPrime == n){
            cout << x;
            break;
        }
        x++;
    }
    if (n == 1){
        cout << 2;
    }
    

}