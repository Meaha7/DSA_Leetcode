Node* rotate(Node* head, int k) {

    if(!head || !head->next) return head;

    while(k--){

     Node* temp=head;

     while(temp->next->next){
         temp=temp->next;
     }

     Node *tail=temp->next;
     temp->next=nullptr;
     tail->next=head;
     head=tail;
    }

    return head;
}
