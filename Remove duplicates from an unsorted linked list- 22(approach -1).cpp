/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        
        if(head == NULL){
            return head;
        }
        
        Node* curr = head;
        
        while(curr!=NULL){
            Node* prev = curr;
            Node* temp = curr->next;
            
            while(temp!=NULL){
                if(curr->data == temp->data){
                    prev->next = temp->next;
                    delete temp;
                    temp = prev->next;
                }else {
                    prev = temp;
                    temp = prev->next;
                }
                
            }
            curr = curr->next;
            
        }
        return head;
        
    }
};