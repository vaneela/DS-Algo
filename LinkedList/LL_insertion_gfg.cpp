   Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node * newNode = new Node(x);
       Node * temp = head;
       head = newNode;
       newNode->next = temp;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       
       Node * newNode = new Node(x);
       Node * tail=head;
       if(head== NULL){
           head = newNode;
           newNode ->next = NULL;
       }
       if(head->next == NULL){
        head ->next = newNode;
        newNode ->next = NULL;
        return head;
       }
       
       while(tail->next!=NULL){
           tail=tail->next;
       }
       tail->next=newNode;
       newNode->next=NULL;
    
        return head;
    }