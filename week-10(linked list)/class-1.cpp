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

    ~Node(){
        cout << "The deleted data is " << this->data << "delete" << endl;
    }


};

// insert data in linked list before head 

void insertAtHead(Node* & head,Node* &tail,int data){
        if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
        }
        // step1:-create new Node
        Node* newNode = new Node(data);
        
        // step2:-add of head store in newNode pointer 
        newNode -> next = head;

        // step3:-update 
        head = newNode;
}

// insert data in linked list at last

void insertAtLast(Node* &head,Node* &tail,int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1:-
    Node* newNode = new Node(data);

    // step2:-
    tail->next = newNode;


    // step3:-

    tail = newNode;
}

int findLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

// insert at any position

void insertAtPosition(Node* &head , Node* &tail,int data,int position){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if (position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    int len = findLength(head);

    if(position >= len){
        insertAtLast(head,tail,data);
        return;
    }
    {
        /* code */
    }
    

    // step1:- find pre and current position
    Node* prev = head;
    int i = 1;
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

void  deleteAtposition(int position,Node* &head,Node* &tail){
    if(head == NULL){
        cout <<"don't delete,LL is empty" << endl;
        return;
    }

    // Data deleted at first position

    if(position == 1){
        Node* temp = head;
        // step:-1
        head = head->next;
        // step:-2
        delete temp;
        return;
    }

    // Data deleted at last position


    int len = findLength(head);

    if(position == len){
        //find previous
        int i = 1;
        Node* prev = head;
        while(i < position-1){
            prev = prev->next;
            i++;
        }
        // step:-2
        prev->next = NULL;
        // step:-3
        Node* temp = tail;
        // step:-4
        tail = prev;
        // step:-5
        delete temp;
    }

    // Data deleted at middle positon


    Node* prev = head;

    int i = 1;
    while(i < position){
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;

    // step2:-

    prev->next = curr->next;

    // step4:-
    curr->next = NULL;

    // step5:-
    delete curr;
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
    // Node* tail = new Node(10);
    // // if last node is not their 

    // // Node* tail = NULL;
    // // Node* head = NULL;
   

    // insertAtLast(tail,20);
    // insertAtLast(tail,30);
    // insertAtLast(tail,40);
    // insertAtLast(tail,50);

    // print(tail);
    // cout << endl;

    // insertAtPosition(head,tail,35,3);

    // cout << "printing the data of linked list " << endl;
    // print(head);

        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, tail,20);
        insertAtHead(head, tail,50);
        insertAtHead(head, tail,60);
        insertAtHead(head,tail, 90);
        // insertAtLast(head, tail, 77);
        // insertAtLast(head, tail, 57);
        // insertAtLast(head, tail, 97);
        // insertAtLast(head, tail, 27);

        print(head);
        cout << endl;

        // insertAtPosition(head,tail,35,2);


        // Delete :-

        deleteAtposition(2,head,tail);

        print(head);
        cout << endl;
    return 0;
}