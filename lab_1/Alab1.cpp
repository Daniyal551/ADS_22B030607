#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> task(int a) {
    int in = 0;
    int unt = 0;
    vector<int> arr(a);
    vector<int> wasArr;
    for (int curNum = 1; curNum <= a; curNum++) {
        while (true) {
            if (in >= a) {
                in = 0;
            }
            if (arr[in] != 0) {
                in += 1;
                continue;
            }
            if (unt == curNum) {
                arr[in] = curNum;
                unt = 0;
                in += 1; 
                break;
            }
            else {
                unt += 1;
                in += 1;
            }
        }
    }
    return arr;
}

int main() {
    int num;
    cin >> num;

    int temp;
    vector<int> tempVec;

    queue <int> piles;

    for(int i = 0; i < num; i++){
        cin >> temp;
        piles.push(temp);
    }
    for(int i = 0; i < num; i++){
        tempVec = task(piles.front());
        piles.pop();
        for(int j = 0; j < tempVec.size(); j++){
            cout << tempVec[j] << ' ';
        }
        cout << '\n';
    }
    
}