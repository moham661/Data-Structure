#include <iostream>
using namespace std;

static const int size =5;

int queue[size];
int front=-1 , rear=-1;

void enQueue(int val);

void dequeue();

int peek();

void display();

int main() {
    enQueue(5);
    enQueue(10);
    enQueue(15);
    display();
    dequeue();
    display();
    cout<<"peek : "<<peek();

    return 0;
}

void enQueue(int val){
    if(rear != size - 1){
        if (front==-1 && rear == -1){
            rear++;
            front++;
            queue[rear]=val;
        } else{
            rear++;
            queue[rear]=val;
        }
    } else{
        cout<<"queue is full"<<endl;
    }
}

void dequeue(){
     if (front==-1 && rear == -1 && front<=rear) {
         cout<<"queue is empty"<<endl;
     } else{
         front++;
     }
}

int peek(){
    if (front==-1 && rear == -1 && front<=rear) {
        cout<<"queue is empty"<<endl;
        return -1;
    } else{
        return queue[front];

    }
}

void display(){
    if (front==-1 && rear == -1 && front<=rear) {
        cout<<"queue is empty"<<endl;
    } else{
        for (int i = front; i <=rear ; ++i) {
            cout<<queue[i]<<"\t";
        }
        cout<<endl;    }
}