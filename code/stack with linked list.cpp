#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};

node*top=NULL;

void display();
void push(int value);
int pop();
int peek();

int main() {
 push(5);
 push(10);
 push(15);
 display();
 pop();
 display();
 cout<<"top : "<<peek()<<"\n";

    return 0;
}

void display() {
    node *current_node=top;
    if (top == NULL) {
        cout << "stack is empty.";
    } else {
        while (current_node !=NULL){
            cout<<current_node->data<<"\n";
            current_node=current_node->next;
        }
    }
    cout<<endl;
}
void push(int value){
    node * new_node= new node;
    new_node->data=value;
    new_node->next=top;
    top=new_node;
}
int pop() {
    int value;
    if (top == NULL) {
        cout << "stack is empty.";
        return -1;
    } else {
        node *firstNode = top;
        top=firstNode->next;
        value=firstNode->data;
        delete firstNode;
        return value;
    }
}
int peek(){
    if (top == NULL) {
        cout << "stack is empty.";
        return -1;
    } else {
        return top->data;
    }
}
