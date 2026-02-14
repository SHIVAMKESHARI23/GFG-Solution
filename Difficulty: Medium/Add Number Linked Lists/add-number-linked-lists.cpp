class Solution {
  public:
  
  Node* reverse(Node* head){
      if(head==nullptr || head->next==nullptr){
          return head;
      }
      Node* prev=nullptr;
      Node* curr=head;
      while(curr){
          Node* nextnode=curr->next;
          curr->next=prev;
          prev=curr;
          curr=nextnode;
      }
      return prev;
  }
  
  Node* removezero(Node* head){
      while(head && head->data==0){
          head=head->next;
      }
      return head ? head : new Node(0);
  }
  
  Node* addTwoLists(Node* head1, Node* head2) {
      
      Node* hhead = removezero(head1);
      Node* headss2 = removezero(head2);
      
      Node* head = reverse(hhead);
      Node* heads2 = reverse(headss2);  
      
      int carry=0;
      Node* newhead=nullptr;
      Node* tail=nullptr;
      
      while(head || heads2 || carry){
          
          int sum=carry;
          
          if(head){
              sum+=head->data;
              head=head->next;
          }
          
          if(heads2){
              sum+=heads2->data;
              heads2=heads2->next;
          }
          
          carry=sum/10;
          Node* newnode=new Node(sum%10);
          
          if(!newhead){
              newhead=newnode;
              tail=newnode;
          }
          else{
              tail->next=newnode;
              tail=newnode;
          }
      }
      
      newhead=reverse(newhead);
      return newhead;
  }
};
