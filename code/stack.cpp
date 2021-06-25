#include <iostream>
using namespace std;

static const int size=5;

int stack[size] ,top=-1;

void push(int val);

int pop();

int peak();

void display();

int main() {
    push(5);
    push(3);
    display();
    pop();
    display();
    cout<<"peek : "<<peak()<<endl;
    display();
    return 0;
}

void push(int val){
    if(top==size-1){
        cout<<"the stack is full"<<endl;
    }
    else{
        top++;
        stack[top]=val;
    }
}

int pop(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }else{
        return  stack[top--];

    }
}

int peak(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }else{
        return  stack[top];

    }
}

void display(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }else{
        for (int i = top; i >=0 ; i--) {
            cout<<stack[i]<<endl;
        }

    }
}