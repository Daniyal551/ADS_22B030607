#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;


int main(){
    vector <int> allNumb;
    int al;
    int nt;
    int Num;
    int squareCurNum;
    // deque <int> special;

    nt = 0;
    cin >> al;

    for(int i = 2; i < al * 100; i++){
        allNumb.push_back(i);
    }

    int primeIn = 0;


    for(int i = 0; i < allNumb.size(); i++){
        Num = allNumb[i];
        if(Num == -1){
            continue;
        }else{
            primeIn++;
            // cout << "Index: " << i + 1<< '\n';
            // sd
            if(find(allNumb.begin(), allNumb.end(), primeIn) != allNumb.end()){
                    nt++;
            }
            
            if(nt == al){
                cout << Num;
                break;
            }else{
                for(int j = i + 1; j < allNumb.size(); j++){
                    if(allNumb[j]== -1){
                        continue;
                    }else if(allNumb[j] % Num == 0){
                        allNumb[j] = -1;
                    }
                }                
            }
        }
    }

}