class Solution {   
public:     
    void deleteAllOccurOfX(struct Node** head_ref, int x) {         
        if (*head_ref == nullptr) return; // Check if list is empty

        struct Node* temp = *head_ref;

        while (temp != nullptr) {
            if (temp->data == x) {  
                Node* nextNode = temp->next;
                Node* prevNode = temp->prev;

                // If deleting the head node
                if (temp == *head_ref) {
                    *head_ref = nextNode; 
                }
                
                // Update previous and next pointers
                if (prevNode) prevNode->next = nextNode;
                if (nextNode) nextNode->prev = prevNode;

                // Free memory
                delete temp;
                temp = nextNode; // Move to the next node
            } 
            else {
                temp = temp->next;
            }
        }
    } 
};
