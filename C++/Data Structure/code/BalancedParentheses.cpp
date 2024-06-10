#include <bits/stdc++.h>
using namespace std;

bool pair_calc(char back,char front){
    if (back == '{' && front == '}')
        return true;
    else if (back == '[' && front == ']')
        return true;
    else if (back == '(' && front == ')')
        return true;
    return false;
}

bool is_balanced(string exp){
    stack<char>s;

    for (int i = 0; i < exp.size(); ++i) {
        if( exp[i]=='{' || exp[i]=='(' || exp[i]=='['){
            s.push(exp[i]);
        }
        else if( exp[i]=='}' || exp[i]==')' || exp[i]==']'){
            if (s.empty() || !pair_calc(s.top() ,exp[i] ))
                return false;
            else
                s.pop();
        }
    }
    return s.empty();
}

int main(){
    string s;cin>>s;
    if (is_balanced(s))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;

    return 0;
}