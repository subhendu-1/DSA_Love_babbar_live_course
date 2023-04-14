#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;


        Node(){
            this->data = 0;
            this->next = NULL;
            this->prev = NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }

};
int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
         temp = temp->next;
         len++;
    }
    return len;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

void insertAtHead(Node* &head,Node* &tail,int data){
    cout << "check" << endl; 
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
      
    }
    else{

    Node* newNode = new Node(data);
    // step1:-
    newNode -> next = head;
    // step2:
    head -> prev = newNode;
    // step3:-
    head = newNode; 
    }

}


int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    Node* head = first;
    Node* tail = third;

    first->next = second;
    second->prev = first;

    second -> next = third;
    third -> prev = second;

    cout << "print all the Node" << endl;
    print(first);
    cout << endl;

    insertAtHead(head,tail,101);
    cout << "print after insert the Node" << endl;
    print(first);
    cout << endl;


    return 0;
}