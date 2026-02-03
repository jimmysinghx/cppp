#include <iostream>
#include <string>
using namespace std;


class Node{
    public:
    int data ;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;

    }
   
};

void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

void print(Node* &head ){
    Node* temp = head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    insertAtHead(head , 20);
    print(head);
    insertAtHead(head , 80);
    print(head);
    insertAtHead(head , 100);
    print(head);
    insertAtHead(head , 120);
    print(head);
    
}

