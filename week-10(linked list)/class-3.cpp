#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

int findLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void Print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void findMiddle(Node* head,int len){
    if(len%2 == 0){
        int i = 0; 
        Node* temp = head;
        int n = len/2-1;
        while (n--)
        {
            temp = temp -> next;
        }
    cout << "check" << endl;
        cout << temp ->data << endl;
        
    }
    else{
        int i = 0; 
        Node* temp = head;
        int n = len/2;
        while (n--)
        {
            temp = temp -> next;
        }
        cout << temp ->data << endl;
    }
}


// another approch :- Two pointer approch using solve

Node* FindMiddle2(Node* &head){
    if(head == NULL){
        cout << "LL is empty" << endl;
        return head;
    }
    if(head -> next == NULL){
        cout << "One node is their" << endl;
        return head;
    }
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && slow != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast ->next;
            slow = slow -> next;

        }
    }
    return slow;
}

Node* reverKNode(Node* &head,int k){
    if(head == NULL){
        cout << "LL is empty" << endl;
        return head;
    }
    // if(head->next == NULL){
    //     cout << "LL in one node is their" << endl;
    //     return head;
    // }
    int len = findLength(head);
    if(k > len){
        // input position in less than length
        return head;
    }

    //hear we coming length is gatter than k

    // soleve one case reverse 

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr -> next;
    int count = 0;

    while(count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward  != NULL){
        head -> next = reverKNode(forward,k);
    }

    return prev;
}

Node* findLoop(Node* head){

}

bool findCircular(Node* head){
    if(head == NULL){
        return false;
    }
    Node* temp = head;
  
    while(head != NULL){
        if(head->next == temp){
            return true;
        }
        head = head -> next;
    }
    return false;
}

Node* findLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }
}
int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    first->next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth ->next = NULL;
    // fifth -> next = sixth;
    // sixth -> next = NULL;

    // int len = findLength(first);
    // cout << len << endl;

    // Print(first);
    // cout << "middle element of the linked list is" << endl;
    // findMiddle(first,len);


    // cout << "middle element of the ll is "<< FindMiddle2(first) -> data << endl;

    // first = reverKNode(first,5);
    // Print(first);

    bool ans = findCircular(first);
    cout << ans << endl;

    return 0;
}