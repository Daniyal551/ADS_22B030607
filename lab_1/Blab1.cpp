#include <iostream>
using namespace std;

int main(){

    int sum;
    cin >> sum;
    int people[sum];
    for(int i=0; i < sum; i++){
        int number;
        cin >> number;
        people[i] = number;
    
    }
    int x = -1;
    int last[sum];
    last[0] = x;
    for(int i = 1; i < sum; i++){
        for(int j = i - 1; j >= 0; j--){
            if(people[i] >= people[j]){
                last[i] = people[j];
                j = -1;
            } else {
                last[i] = -1;
            }

        }
    }
    for(int i = 0; i < sum; i++){
        cout << last[i] << " ";
    }     
    return 0;
}