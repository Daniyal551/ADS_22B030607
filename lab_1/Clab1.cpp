#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    stack<string> stack1;
    stack<string> stack2;
    for(int i = 0; i < s1.size(); i++)      {
        string x;
        x = s1[i];
        
        if(x != "#"){stack1.push(x);}
        else {stack1.pop();}
                                            }

    for(int i = 0; i < s2.size(); i++)      {
        string x;
        x = s2[i];
        
        if(x != "#"){stack2.push(x);}
        else {stack2.pop();}                }

    if(stack1 == stack2){cout << "YES";}
    else{cout << "NO";}

}