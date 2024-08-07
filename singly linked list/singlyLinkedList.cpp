#include <iostream>
using namespace std;

class Node{
    public:
    int number;
    Node* pointer;
    Node(int data){
        number = data;
        pointer = NULL;
    };
};

//use this method to insert an element at head
void insertAtHead(Node* &head, int value){
    Node* node = new Node(value);
    node->pointer = head;
    head = node;
};

//use this method to insert an element at tail
void insertAtTail(Node * head, int value){
    Node* point = new Node(value);
    Node* temp = head;
    while(temp->pointer != NULL){
        temp = temp->pointer;
    }
    temp->pointer = point;
};

//use this method to insert an element at kth position
void insertPerticularPosition(Node* head, int value, int position){
    Node* new_node = new Node(value);
    Node* temp = head;
    int current_position = 0;
    while(current_position != (position-1)){
        temp = temp->pointer;
        current_position++;
    };
    new_node->pointer = temp->pointer;
    temp->pointer = new_node;
};

//update kth value 
void updatePerticularValue(Node* head,int value, int position){
    int current_positon = 0;
    Node* temp = head;
    while(current_positon != position){
        temp = temp->pointer; 
        current_positon++;
    }
    temp->number = value;
};

//delete a starting element
void deleteTheStartingElement(Node* &head){
    Node* temp = head;
    head = head->pointer;
    free(temp);
}

//delete kth element
void deletePerticularElement(Node* head, int position){
    int index = 0;
    Node* previous = head;
    while(index!=position-1){
        previous = previous->pointer;
        index++;
    }
    Node* temp = previous->pointer;
    previous->pointer = previous->pointer->pointer;
    free(temp);
}

//delete a last elemet
void deleteLastElement(Node* head){
    Node* secondLastNode = head;
    while(secondLastNode->pointer->pointer != NULL){
        secondLastNode = secondLastNode->pointer;
    }
    Node* temp = secondLastNode->pointer;
    secondLastNode->pointer = NULL;
    free(temp);
}

//use this method to print all the elements
void printNodeElements(Node* head){
    Node* temporary = head;
    while(!(temporary==NULL)){
        cout<<temporary->number<<" ";
        temporary = temporary->pointer;
    }
};

int main(){
    Node *userMadeLinkedList = new Node(2);
    insertAtHead(userMadeLinkedList,1);
    deletePerticularElement(userMadeLinkedList,1);
    printNodeElements(userMadeLinkedList);
    return 0;
};