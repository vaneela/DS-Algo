Node * insertNode(Node * head, int i, int data){
    // creating new node
    Node * newNode = new Node(data);
    int count =0;
    // storing head's address
    Node *temp = head;

    if(i==0){
        newNode ->next = head;
        head = newNode;
        return head;
    }
    while(temp!=NULL && count <i-1){
        temp =temp->next;
        count++;
    }
    if(temp!=NULL){
        Node *a=temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
}