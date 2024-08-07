#include <iostream>
using namespace std;

class Node{
    public:
    int number;
    Node* pointer;
    Node(int data){
        number = data;
        pointer = NULL;
    }
};

//alternativeElementsAlgorithm
void alternativeElementsAlgorithm(Node* head) {
    Node* current_node = head;
    while (current_node != NULL && current_node->pointer != NULL) {
        Node* temp = current_node->pointer;
        current_node->pointer = current_node->pointer->pointer;
        delete temp;
        current_node = current_node->pointer;
    }
}

//deleteDuplicatesReturnSorted
void deleteSortedDuplicatesReturnSorted(Node* head){
    Node* current_node = head;
    while(current_node != NULL){
        while((current_node->pointer!=NULL) && (current_node->number == current_node->pointer->number)){
            Node* temp = current_node->pointer;
            current_node->pointer = current_node->pointer->pointer; 
            delete temp;
        }
        current_node = current_node->pointer;
    }
}

//Traversing in reverse order
void traversingReversedOrder(Node* head){
    if(head== NULL) return;
    traversingReversedOrder(head->pointer);
    cout<<head->number<<" ";
}

//revsersing a linked list
void reversingLinkedList(Node* head){
    if(head==NULL) return;
}

//insert element at the tail
void push_back(Node* head, int value){
    Node* new_node = new Node(value);
    Node* temp = head;
    while(temp->pointer!=NULL){
        temp = temp->pointer;
    }
    temp->pointer = new_node;
}
//print elements
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->number<<" ";
        temp = temp->pointer;
    };
};

int main(){
    Node* userLinkedList = new Node(1);
    push_back(userLinkedList,2);
    push_back(userLinkedList,2);
    push_back(userLinkedList,2);
    push_back(userLinkedList,3);
    push_back(userLinkedList,3);
    push_back(userLinkedList,4);
    push_back(userLinkedList,4);
    push_back(userLinkedList,4);
    push_back(userLinkedList,5);
    push_back(userLinkedList,5);
    push_back(userLinkedList,5);
    push_back(userLinkedList,5);
    traversingReversedOrder(userLinkedList);
    // print(userLinkedList);
    return 0;
}