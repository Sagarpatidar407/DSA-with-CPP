/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int pos) {
        
        if(pos == 1){
            Node* temp = head;
            // head->next = temp;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }
        
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        
        while(count<pos){
            prev = curr;
            curr = curr->next;
            count++;
        }
        
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        return head;
        
    }
};