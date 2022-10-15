#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Node{
    public:
 	int data;
    Node * next;
    Node(){
        data=0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        next=NULL;
    }
    void print_node(Node*head){
        while(head != NULL){
            cout << head->data <<" ";
            head = head->next;
        }
        cout << endl;
    }
    void insert_node(Node* head ,int data){
        Node* newNode = new Node(data);
        Node * temp=head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next=newNode;

    }

 };
    // void 
 Node * solve(Node * head,int k, int grps, int n, int i){
  	if(head == NULL)
    return head;
    if(grps == 0)
    return head;
    if(i % 2 == 0){
    	int cnt = 0;
        Node *prev= NULL;
        Node *cur = head;
        Node*next= head;
        if(head)
        	next = head->next;
        while(cur && cnt < k){
        	next = cur->next;
            cur->next = prev;
            prev= cur;
            cur = next;
            cnt++;
        }
        if(next)
        	head->next= solve(next,k,grps-1,n,i+1);
        return prev; 
    }else{
    	int cnt=0;
        Node*temp=head;
        while(cnt < k && cnt <= n ){
        	head = head->next;
            c
        }
        head->next = solve(head, k,grps-1,n,i+1);
        return temp;
    }
 }
//  O(N)+O(N)
//  O(k)
 Node * rev(Node *head,int k)
 {	int n = 0,no_of_grps;
 	
 	Node*temp = head;
    while(temp != NULL){
    	n++;
        temp = temp->next;
    }
    no_of_grps = n/k;
	Node * ans = solve(head,k,no_of_grps,n,0);
    return ans;
 }
int main(){
    Node* head= new Node(1);
    for(int i = 2; i <= 4; i++){
        head->insert_node(head,i);
    }
    head->print_node(head);
    Node * ans = rev(head,2);
    ans->print_node(ans);
    return 0;
}