#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <stack>
#include <string>
using namespace std;


int main(){
    vector <char> rd;
    string w;

    cin >> w;
    for(int i; i < w.size(); i++){
        rd.push_back(w[i]);
    }

    int super = 1;
    int revInd = rd.size() - 1;
    int balan = 1;
    int yeah = 0;
    int superRevInd;

    for(int i = 0; i < rd.size(); i++){
        if(i == revInd - 1){
            if(rd[i] != rd[revInd]){
                balan = 0;
            }
            yeah = 1;
            break;
        }
        if(rd[i] == rd[revInd]){
            revInd--;
            continue;
        
        }else{
            if(super== 1){
                superRevInd = revInd - 1;
                for(int j = superRevInd - 1; j >= 0; j--){
                    if(i != j){
                        if(rd[i] == rd[j]){
                            revInd = j - 1;
                            super = 0;
                            break;
                        }
                    }else{
                        balan = 0;
                        break;
                    }
                }
                if(balan == 0){
                    break;
                }
            }else{
                balan = 0;
                break;
            }
        }
    }

    if(balan == 1 and yeah == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}