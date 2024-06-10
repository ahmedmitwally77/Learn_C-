#include <bits/stdc++.h>
using namespace std;
/*                                                                              stack_linkedlist_implementation
                                                                              by => Eng/ Ahmed Mitwally Essa

                                                                       (is_empty,is_found,push,display,count,pop,peek)
                                                                                                                                                                                                */

class stack_linkedList{
    struct node{
        int data;
        node *next;
    };
    node *top;
public:
    stack_linkedList(){
        top=NULL;
    }
    bool is_empty(){
        return top ==NULL;
    }
    bool is_found(int val){
        node *temp=top;
        while (temp != NULL){
            if (temp->data == val)
                return true;
            temp=temp->next;
        }
        return false;

    }
    void push(int newitem){
        node *newnode=new node;
        newnode->data=newitem;
        if (is_empty())
            newnode->next=NULL;
        else
            newnode->next=top;
        top=newnode;
    }
    void display(){
        node *temp=top;
        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int count(){
        node *temp=top;
        int count=0;
        while (temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }

    void pop(){
        if (is_empty())
            cout<<"UnderFlow"<<endl;
        else{
            node *delptr=top;
            top=top->next;
            delete delptr;
        }
    }
    int peek(){
        return top->data;
    }
};

int main() {
    stack_linkedList s;
    s.push(10);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.display();
    s.pop();
    cout<<s.peek()<<endl;
    s.display();
    return 0;
}
