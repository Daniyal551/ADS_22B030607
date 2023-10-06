#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;


int main(){
        queue <int> borDk;
        queue <int> nurDk;

        int input;

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 5; j++){
                cin >> input;
                if(i == 0){
                    borDk.push(input);
                }else{
                    nurDk.push(input);
                }
            }
        }

        int borCd;
        int nurCd;

        int count = 0;


        while(!borDk.empty() and !nurDk.empty() and count <= 1000000){
            borCd = borDk.front();
            nurCd = nurDk.front();



// 
// 

            if((borCd > nurCd or (nurCd == 9 and borCd == 0)) and !(borCd == 9 and nurCd == 0)){
                borDk.push(borCd);
                borDk.push(nurCd);
                
            }else{
                nurDk.push(borCd);
                nurDk.push(nurCd); 
            }
            borDk.pop();
            nurDk.pop();
            count++;
        }

        if(borDk.empty()){
            cout << "Nursik " << count;
        }else if(nurDk.empty()){
            cout << "Boris " << count;
        }else{
            cout << "blin nichya" << count;
        }



}