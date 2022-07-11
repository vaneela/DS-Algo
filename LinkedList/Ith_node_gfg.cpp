int GetNth(struct node* head, int index){
  // Code here
  while(index>-1){
    //   cout << index<<" "<< head->data << " ";
      if(index==1)
        return head->data;
        index--;
    head=head->next;
  }
}