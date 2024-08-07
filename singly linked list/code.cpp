#include <iostream>
using namespace std;

class Node{
    public:
    int number;
    Node *pointer;
    Node(int data){
        number = data;
        pointer = NULL;
    };
};
//insertTail
void insertTail(Node* head, int value){
    Node* node = new Node(value);
    Node* temp = head;
    while(temp->pointer!=NULL){
        temp=temp->pointer;
    }
    temp->pointer = node;
}

//maincode
void mainCode(Node* &head){
    int c_index = 0;
    Node* temp = head;
    while(temp!=NULL){
        if(((c_index%2 == 0) || c_index== 0)){
            Node* current_node = temp;
            Node* middle_node = temp->pointer;
            Node* next_node = temp->pointer->pointer;
            current_node->pointer = next_node;
            free(middle_node);
        }
        temp = temp->pointer;
        c_index++;
    }
}

//print
void printNodeElements(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->number<<" ";
        temp = temp->pointer;
    }
}

int main(){
    Node *userMadeLinkedList = new Node(1);
    insertTail(userMadeLinkedList,2);
    insertTail(userMadeLinkedList,3);
    insertTail(userMadeLinkedList,4);
    insertTail(userMadeLinkedList,5);
    mainCode(userMadeLinkedList);
    printNodeElements(userMadeLinkedList);
    return 0;
}