#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* front=NULL;
node* rear=NULL;

void enQueue(int val);
void dequeue();
int peek();
void display();

int main() {
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    display();
    cout<<"peek : "<<peek()<<endl;
    dequeue();
    display();
    cout<<"peek : "<<peek();
    return 0;
}

void enQueue(int val){
    node* new_node= new node;
    new_node->data=val;
    new_node->next=NULL;
    if(front==NULL){
        front=rear=new_node;
    } else{
        rear->next=new_node;
        rear=new_node;
    }
}
void dequeue(){
    if(rear==NULL){
        cout<<"queue is empty"<<endl;
    } else if (front==rear){
        node* ptr=front;
        front=rear=NULL;
        delete ptr;
    } else{
        node* ptr=front;
        front=front->next;
        delete ptr;
    }
}
int peek(){
    if (front==NULL){
        cout<<"queue is empty"<<endl;
        return -1;
    } else{
        return front->data;
    }
}
void display() {
    if (front == NULL) {
        cout << "Linked list is empty.";
    } else {
        node *current_node=front;
        while (current_node !=NULL){
            cout<<current_node->data<<"\t";
            current_node=current_node->next;
        }
    }
    cout<<endl;
}