#include <iostream>
using namespace std;

static const int size =5;

int queue[size];
int front=-1 , rear=-1;

bool isEmpty();
bool isFull();
void enQueue(int val);
void deque();
int peek();
void display();

int main() {
    enQueue(5);
    enQueue(10);
    enQueue(15);
    enQueue(15);
    enQueue(15);
    display();
   deque();
    display();
    enQueue(10);
    enQueue(15);
    display();
    cout<<"peek : "<<peek();
    return 0;
}

bool isEmpty(){
    if (front==-1 && rear==-1){
        return true;
    } else{
        return false;
    }
}
bool isFull(){
    if (front==0 && rear==size-1){
        return true;
    } else if (rear==front-1){
        return true;
    } else{
        return false;
    }
}
void enQueue(int val){
    if(isFull()){
        cout<<"queue is full"<<endl;
    } else{
        if(isEmpty()){
            front = rear =0;
            queue[rear] = val;
        } else if (rear==size-1){
            rear = 0;
            queue[rear] = val;
        } else{
            rear++;
            queue[rear]=val;
        }
    }
}
void deque(){
    if(isEmpty()){
        cout<<"queue is empty"<<endl;
    } else{
        if (front==rear){
            front=rear=-1;
        } else if (front==size-1){
            front=0;
        }else{
            front++;
        }
    }
}
int peek(){
    if(isEmpty()){
        cout<<"queue is empty"<<endl;
        return -1;
    } else{
        return queue[front];
    }
}
void display(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
        } else{
            if (front<=rear){
                for (int i = front; i <=rear ; i++) {
                    cout<<queue[i]<<"\t";
                }
            } else{
                for (int i = front; i <size ; i++) {
                    cout<<queue[i]<<"\t";
                }
                for (int i = 0; i <=rear ; i++) {
                    cout<<queue[i]<<"\t";
                }
            }
        }
    cout<<endl;
};