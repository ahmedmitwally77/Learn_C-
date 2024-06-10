#include <bits/stdc++.h>
using namespace std;

class my_queue{
    int front;
    int rear;
    int length;
    int max_size;
    int *arr; //dynamic array
public:
    my_queue(int size){
        if (size<=0)
            max_size=100;
        else
            max_size=size;
        arr=new int[max_size];
        front=0;
        rear=max_size-1;
        length=0;
    }

    bool is_empty(){
        return length==0;
    }
    bool is_full(){
        return length==max_size;
    }
    void enqueue(int val){
        if (is_full())
            cout<<"The Queue Is OverFlow\n";
        else{
            rear=(rear+1) % max_size;
            arr[rear]=val;
            length++;
        }
    }
    void dequeue() {
        if (is_empty())
            cout << "The Queue Is UnderFlow\n";
        else {
            front = (front + 1) % max_size;
            length--;
        }
    }
    int get_front(){
        return arr[front];
    }
    int get_rear(){
        return arr[rear];
    }
    void print(){
        for (int i = front; i != rear+1 ; i=(i+1)%max_size) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int search(int val){
        int pos = -1;
        if (!is_empty()) {
            for (int i = front; i != rear; i = (i + 1) % max_size) {
                if (arr[front] == val) {
                    pos = i;
                    break;
                }
            }
            if (pos == -1 && arr[rear] == val) {
                pos = rear;
            }
        }
        else
            cout<<"Queue Is Empty\n";
        return pos;
    }
};

int main(){
    const int max_size=1000;
    my_queue q1(max_size);
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.print();
    cout<<q1.get_front()<<endl;
    cout<<q1.get_rear()<<endl;
    q1.dequeue();
    q1.dequeue();
    q1.print();
    cout<<q1.search(30);


}
