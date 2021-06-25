#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};

node*head=NULL;

void insertNode(int val){
    node *new_node , * last;
    new_node= new node;
    new_node->data = val;
    if(head==NULL){
        head = new_node;
        new_node->next=NULL;
    }
    else{
        last=head;
       while (last->next !=NULL){
           last=last->next;
       }
       last->next=new_node;
       new_node->next=NULL;
    }
}
void display(node *head) {
    node *current_node=head;
    if (head == NULL) {
        cout << "Linked list is empty.";
    } else {
         while (current_node !=NULL){
             cout<<current_node->data<<"\t";
             current_node=current_node->next;
         }
    }
    cout<<endl;
}
void removenode(int val){
    node * current, *previous;
    current=head;
    previous=head;
    if(current->data==val){
        head=current->next;
        free(current);
        return;
    }
    while (current->data!=val){
        previous=current;
        current=current->next;
    }
    previous->next=current->next;
    free(current);
}
void insert_beginning(int value){
    node * new_node= new node;
    new_node->data=value;
    new_node->next=head;
    head=new_node;
}
node * removeNode(){
    if (head == NULL) {
        cout << "Linked list is empty.";
    }
    else{
        node *firstNode = head->next;
        head->next=NULL;
        delete head;
        return firstNode;
    }

}
void removelastNode(){
    node* last ;
    last=head;
    while (last->next->next !=NULL){
        last=last->next;
    }
    delete (last->next);
    last->next=NULL;
}

void revrser(){
    node *prev,*curr,*next;
    prev=NULL;
    curr=head;
    next=curr->next;
    while (next!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
    }head=prev;
}

int main() {
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);
    display(head);
    insert_beginning(6);
    display(head);
    removenode(15);
    display(head);
     head=removeNode();
     display(head);
     removelastNode();
     display(head);
    return 0;
}
