class Solution {
  public:
    Node* middle(Node* head){
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(Node *head) {
        if (head == NULL || head->next == NULL)
            return true;

        Node* mid = middle(head);
        Node* revSecondHalf = reverse(mid);

        Node* head1 = head;
        Node* head2 = revSecondHalf;

        while(head2 != NULL){
            if(head1->data != head2->data)
                return false;
            head1 = head1->next;
            head2 = head2->next;
        }

        return true;
    }
};
