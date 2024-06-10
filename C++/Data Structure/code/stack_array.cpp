#include <bits/stdc++.h>
using namespace std;
/*                                                                              stack_array_implementation
                                                                              by => Eng/ Ahmed Mitwally Essa                                                                                     */
const int size_array=100;

class stack_array{
    int top;
    int arr[size_array];

public:
    stack_array(){
        top=-1;
    }
    bool is_empty(){
        return top == -1;
    }
    bool is_full(){
        return top == size_array-1;
    }
    int peek(){
        if (is_empty()){
            cout<<"Sorry Your Array Is Underflow"<<endl;
        }
        else {
            return arr[top];
        }
    }
    int print(){
        cout<<"Your Array Items from 0 to "<<top<<" is : ";
        for (int i = top; i >= 0; --i) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void push(int n){
        if (is_full()) {
            cout << "Sorry Your Array Is Overflow" << endl;
        }
        else {
            top++;
            arr[top] = n;
        }
    }
    int pop(){
        if (is_empty()){
            cout<<"Sorry Your Array Is Underflow"<<endl;
        }
        else {
            int n = arr[top];
            top--;
            return n;
        }
    }
};

int main() {
    stack_array s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    s1.print();
    s1.pop();
    s1.print();
    cout<<s1.peek()<<endl;

    s1.pop();
    s1.print();
    cout<<s1.peek()<<endl;
    return 0;
}
