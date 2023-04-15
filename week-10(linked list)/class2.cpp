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

// void insertAtHead(Node* &head,Node* &tail,int data){
//     cout << "check" << endl; 
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
      
//     }
//     else{

//     Node* newNode = new Node(data);
//     // step1:-
//     newNode -> next = head;
//     // step2:
//     head -> prev = newNode;
//     // step3:-
//     head = newNode; 
//     }

// }

void insertAtHead(Node* &head, Node* &tail, int data) {
        if(head == NULL) {
                //LL is empty
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //LL is non-empty
                //step1: create a node
                Node* newNode = new Node(data);
                //step2:
                newNode ->next = head;
                //step3:
                head ->prev = newNode;
                //step4;
                head = newNode;
        }

}

void insertAtTail(Node* head,Node* tail,int data){
    // if(head == NULL){
    //     Node* newNode = new Node(data);
    //     head = newNode;
    //     tail = newNode;
    //     return;
    // }

    // Node* newNode = new Node(data);

    // tail -> next = newNode;
    // newNode -> prev = tail;
    // tail = newNode;



         if(head == NULL) {
                //LL is empty
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //LL is not empty
                Node* newNode = new Node(data);
                tail ->next = newNode;
                newNode ->prev = tail;
                tail = newNode;
        }
}


void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(pos == 1){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findLength(head);
    if(pos >= len){
        insertAtTail(head,tail,data);
        return;

    }

    // insert at middle:-
        // step1:-
        int i = 1;
        Node* previous = head;
        while(i < pos-1 ){
            previous = previous -> next;
            i++;
        }

        Node* curr = previous->next;
        // step2:-

        Node* newNode = new Node(data);
        // step3:-
        previous->next = newNode;
        // step4:-
        newNode->prev = previous;
        // step5:-
        newNode->next = curr;
        // step6:-
        curr->prev = newNode;


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

    // insertAtHead(head,tail,101);
    // cout << "print after insert the Node" << endl;
    // print(first);
    // cout << endl;

    insertAtTail(head,tail,101);
    insertAtTail(head,tail,102);
    insertAtTail(head,tail,101);

    cout << "print after insert the Node" << endl;
    print(first);
    cout << endl;

    insertAtPosition(head,tail,35,5);

    cout << "print after insert the Node" << endl;
    print(first);
    cout << endl;
    return 0;
}