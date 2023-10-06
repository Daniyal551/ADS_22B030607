#include <iostream>
#include <queue>
#include <set>


using namespace std;


bool uniq(queue<int> cons){

    int cur = cons.front();
    
    cons.pop();
    
    while (!cons.empty()){
        if (cons.front() != cur){
            return false;
        }else{
            cons.pop();
        }
    } 
    return true;
}

void change(queue<int> & cons){
    int sban = 0, kban = 0;
    queue<int> ansrs;

    while (!cons.empty()){
        if (cons.front() == 75 and kban <= 0){
                sban++;
                ansrs.push(cons.front());
                cons.pop();
            }else if (cons.front() == 83 and sban <= 0){
                kban++;
                ansrs.push(cons.front());
                cons.pop();
            }else if (cons.front() == 75 and kban > 0){
                cons.pop();
                kban--;
            }else if (cons.front() == 83 and sban > 0){
                cons.pop();
                sban--;
            }
    }
    while (!ansrs.empty()){
        if (ansrs.front() == 75 and kban <= 0){
                cons.push(ansrs.front());
                ansrs.pop();
        }else if (ansrs.front() == 83 and sban <= 0){
                cons.push(ansrs.front());
                ansrs.pop();
        }else if (ansrs.front() == 75 and kban > 0){
                ansrs.pop();
                kban--;
        }else if (ansrs.front() == 83 and sban > 0){
                ansrs.pop();
                sban--;
            }
    }
}



int main(){
    queue<int> ns;
    int inputs;
    cin >> inputs;
    
    string voices;
    cin >> voices;
    
    for(int i = 0; i < voices.size(); i++){
        ns.push(voices[i]);
    }


    do change(ns);
    while(!uniq(ns));
    
    string answer;

    if (ns.front() == 75){
        answer = "KATSURAGI";
    }else{
        answer = "SAKAYANAGI";
    }

    cout << answer;
}