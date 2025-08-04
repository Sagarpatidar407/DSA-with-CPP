/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        if(head == NULL){
            return head;
        }
        
        Node* curr = head;
        
        while(curr!=NULL){
            
            if(curr->next != NULL && curr->data == curr->next->data){
                Node* next_next = curr->next->next;
                Node* nodeto_delete = curr->next;
                
                delete nodeto_delete;
                curr->next = next_next;
            }
            else{
                curr = curr->next;
            }
            
        }
        return head;
        
    }
};