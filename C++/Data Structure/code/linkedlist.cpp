#include <bits/stdc++.h>
using namespace std;
/*                                                                              linked_list_implementation
                                                                              by => Eng/ Ahmed Mitwally Essa

                                   (is_empty,is_found,insert_first,insert_last,insert_at_pos,display,count,delete_first,delete_last,deleteElement , reverse , search)
                                                                                                                                                                                                */
class linkedList{
    struct node{
        int data;
        node *next;
    };
    node *head;
    node *tail;
    int length;
public:
    linkedList(){
        head=NULL;
        tail=NULL;
        length=0;
    }
    bool is_empty(){
        return length == 0 ; //head==NULL
    }
    bool is_found(int val){
        node *temp=head;
        while (temp != NULL){
            if (temp->data == val)
                return true;
            temp=temp->next;
        }
        return false;
    }
    void insert_first(int newitem) {
        node *newnode = new node;
        newnode->data = newitem;
        if (is_empty()) {
            newnode->next = NULL;
            head = newnode;
            tail = newnode;
        }
        else {
            newnode->next = head;
            head = newnode;
        }
        length++;
    }
    void insert_last(int new_item){
        if (is_empty())
            insert_first(new_item);
        else {
            node *newnode = new node;
            newnode->data = new_item;
            tail->next=newnode;
            tail=newnode;
            newnode->next=NULL;
        }
        length++;
    }
    void insert_at_pos(int back,int newItem){
        if (is_empty() || back == 0)
            insert_first(newItem);
        else if(back < 0 || back > length)
            cout<<"Out Of Range\n";
        else if(back == length)
            insert_last(newItem);
        else{
            node *newnode=new node;
            newnode->data=newItem;
            node *temp=head;
            for (int i = 1; i < back; ++i)
                temp=temp->next;
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
    void display(){
        node *temp=head;
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int count(){
        node *temp=head;
        int count=0;
        while (temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }

    void delete_first(){
        if (is_empty())
            cout<<"UnderFlow Can Not Delete"<<endl;
        else if(length == 1){
            node *temp=head;
            head->next=NULL;
            tail->next=NULL;
            delete temp;
            length--;
        }
        else{
            node *temp=head;
            head=head->next;
            delete temp;
            length--;
        }
    }
    void delete_last(){
        if(is_empty())
            cout<<"UnderFlow Can Not Delete"<<endl;
        else{
            node *prev=NULL,*dellptr=head;
            while (dellptr != tail){
                prev=dellptr;
                dellptr=dellptr->next;
            }
            prev->next=NULL;
            tail=prev;
            delete dellptr;
            length--;
        }
    }
    void delete_element(int item){
        if (is_empty())
            cout<<"UnderFlow"<<endl;
        else if(is_found(item) == false)
            cout<<item<<" not found in linkedlist to delete it"<<endl;
        else if(head->data == item)
            delete_first();
        else{
            node *prev=NULL,*dellptr=head;
            while (dellptr->data != item && dellptr != NULL){
                prev=dellptr;
                dellptr=dellptr->next;
            }
            prev->next=dellptr->next;
            delete dellptr;
        }
    }
    void reverse(){
        node *prev,*curr,*next;
        prev=NULL;curr=head;next=head;
        while (next != NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    int search(int ele){
        node *temp=head;
        int pos=-1;
        while (temp != NULL){
            pos++;
            if (temp ->data == ele)
                return pos;
            temp=temp->next;
        }
        return -1;
    }
};

int main() {
    linkedList ll;
    ll.insert_first(80);
    ll.insert_first(70);
    ll.insert_first(60);
    ll.insert_first(50);
    ll.insert_first(40);
    ll.insert_first(30);
    ll.insert_first(20);
    ll.insert_first(10);
    ll.display();
    ll.insert_last(1000);
    ll.insert_at_pos(5,55);
    cout<<ll.count()<<endl;
    ll.display();
    ll.reverse();
    ll.display();
    cout<<ll.search(70);


    return 0;
}
