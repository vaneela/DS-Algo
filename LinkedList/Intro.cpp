#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
Node *takeInput(){
    int data;
    cin >> data;
    Node * head =NULL;
    Node * tail = NULL;
    while(data!=-1){
        Node *newNode = new Node(data);
        if(head ==NULL){
            head = newNode;
            tail = newNode;
        }else{
            // tail = newNode;
             tail->next= newNode;
            //  tail = tail->next;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void increment(Node *head){
    Node *temp = head;
    while(temp != NULL){
        temp -> data++;
        temp = temp -> next;
    }
}

int main(){

//    Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     Node *node3 = new Node(20);
//     Node *node4 = new Node(20);
//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = node4;
//     print(node2);
    Node * head = takeInput();
    print(head);
}