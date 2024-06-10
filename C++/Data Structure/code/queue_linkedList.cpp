#include <bits/stdc++.h>
using namespace std;

class Queue_linked_list{

    struct node{
        int data;
        node *next;
        node(){
            data=0;
            next=NULL;
        }
    };
    node *front;
    node *rear;
    int length;
public:
    Queue_linked_list(){
        front=NULL;
        rear=NULL;
        length=0;
    }
    bool is_empty(){
        return rear==NULL;
    }
    void enqueue(int val){
        node *newnode=new node;
        newnode->data=val;
        newnode->next=NULL;
        if (is_empty()) {
            front=newnode;
            rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
        length++;
    }
    void dequeue(){
        if (is_empty())
            cout<<"Queue Is UnderFlow\n";
        else{
            node *temp=front;
            if (front ==rear){ //one element
                front=NULL;
                rear=NULL;
                length=0;
            }
            else {
                front = front->next;
                delete temp;
                length--;
            }
        }
    }
    int get_front(){
        if (is_empty())
            cout<<"the Queue Is Empty\n";
        else{
            return front->data;
        }
    }
    int get_rear(){
        if (is_empty())
            cout<<"the Queue Is Empty\n";
        else{
            return rear->data;
        }
    }
    void dispaly(){
        node *temp=front;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int get_size(){
        return length;
    }
    void clear(){
        node *dellptr;
        while (front != NULL){
            dellptr=front;
            front=front->next;
            delete dellptr;
        }
        rear=NULL;
    }

};


int main(){
    Queue_linked_list q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.dispaly();
    cout<<q1.get_rear()<<endl;
    cout<<q1.get_front()<<endl;
    q1.dequeue();
    q1.dispaly();




    return 0;
};