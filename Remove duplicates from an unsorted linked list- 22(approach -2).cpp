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
        Node* prev = NULL;
        map<int,bool> visited;
        
        while(curr!=NULL){
            
            if(visited[curr->data]){
                prev->next = curr->next;
                Node* toDelete = curr;
                curr = curr->next;
                delete toDelete;
            }
            else{
                visited[curr->data] = true;
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
        
    }
};