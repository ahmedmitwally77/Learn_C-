#include <bits/stdc++.h>
using namespace std;

int periority(char x){
    if (x == '-' || x == '+') return 1;
    else if (x == '*' || x == '/') return 2;
    else if (x == '^') return 3;
    else return 0;
}

string convert(string exp){
    stack<char>s;
    string output="";
    for (int i = 0; i < exp.size(); ++i) {
        if (exp[i] == ' ')
            continue;

        else if(isalpha(exp[i]) || isdigit(exp[i]))
            output+=exp[i];

        else if(exp[i] == '(')
            s.push(exp[i]);

        else if(exp[i] == ')'){
            while(s.top() != '('){
                output+=s.top();
                s.pop();
            }
            s.pop(); //remove ')'
        }

        else{
            while(!s.empty() && periority(exp[i]) <= periority(s.top())){
                output+=s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
    }
    while (!s.empty()){
        output+=s.top();
        s.pop();
    }
    return output;
}
int main(){
    string s;
    getline(cin,s);
    cout << convert(s);

    return 0;
}