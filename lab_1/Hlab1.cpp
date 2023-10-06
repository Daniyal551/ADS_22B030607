#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int prime = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            prime++;
        } 
    
    }
    if(prime < 2 && n != 1){cout << "YES";} 
    else { cout << "NO";}

}