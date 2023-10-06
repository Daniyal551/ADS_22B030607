#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <deque>
using namespace std;


int main(){
    deque <int> supNm;

    vector <vector <int>> stoe;
    
    char sign;
    int num;
    int intSign;


    while(true){
        cin >> sign;
        if(sign == '!'){
            break;
        }else if(sign == '*'){
            stoe.push_back({1});
        }else if(sign == '+'){
            cin >> num;
            stoe.push_back({2, num});
        }else if(sign == '-'){
            cin >> num;
            stoe.push_back({3, num});
        }
    }




    for(int i = 0; i < stoe.size(); i++){
        intSign = stoe[i][0];
        if(intSign == 1){
            if(supNm.empty()){
                cout << "error" << '\n';
            }else{
                cout << supNm.front() + supNm.back() << '\n';
                
                supNm.pop_front();
                if(!supNm.empty()) supNm.pop_back();
            }
        }else if(intSign == 2){
            supNm.push_front(stoe[i][1]);
        }else if(intSign == 3){
            supNm.push_back(stoe[i][1]);
        }
    }
}