#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }


};

// insert data in linked list before head 

void insertAtHead(Node* & head,int data){
        // step1:-create new Node
        Node* newNode = new Node(data);
        
        // step2:-add of head store in newNode pointer 
        newNode -> next = head;

        // step3:-update 
        head = newNode;
}

// insert data in linked list at last

void insertAtLast(Node* &tail,int data){
    // step1:-
    Node* newNode = new Node(data);

    // step2:-
    if(tail == NULL){
        tail = newNode;
    }
    else{
    tail->next = newNode;

    }

    // step3:-

    newNode -> next = NULL;
}



// insert at any position

void insertAtPosition(Node* &head , Node* &tail,int data,int position){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step1:- find pre and current position
    Node* prev = head;
    int i = 0;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    // step2:-
    Node* newNode = new Node(data);

    // step3:-

    newNode ->next = curr;

    // step4:-

    prev -> next = newNode;
    
}

void insertedAtMiddle(){
    
}

void print(Node* head){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }

}

int main(){
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* four = new Node(40);
    // Node* fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = four;
    // four->next = fifth;
    // fifth->next = NULL;

    // cout << "printing the data of linked list " << endl;
    // print(first);

    // insert at head:-

    // Node* head = new Node(10);
    // if first node is not their 

    // Node* head = NULL;
   

    // insertAtHead(head,20);
    // insertAtHead(head,30);
    // insertAtHead(head,40);
    // insertAtHead(head,50);

    // cout << "printing the data of linked list " << endl;
    // print(head);

    // cout << endl;

    // insert at end:-

    // Node* head = new Node(10);
    // if last node is not their 

    Node* tail = NULL;
    Node* head = NULL;
   

    insertAtLast(tail,20);
    insertAtLast(tail,30);
    insertAtLast(tail,40);
    insertAtLast(tail,50);

    insertAtPosition(head,tail,35,3);

    cout << "printing the data of linked list " << endl;
    print(tail);

   

    return 0;
}