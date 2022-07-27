/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    
private:
    void insertAtTail(Node* &head, Node* &tail, int data){
        
        Node* ans = new Node(data);
        Node* temp = ans;
        
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }else{
            tail -> next = temp;
            tail = temp;
        }
    }
    
public:
    Node* copyRandomList(Node* head) {
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL){
           insertAtTail(cloneHead, cloneTail, temp -> val);
            temp = temp -> next;
        }
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;              
            next = cloneNode -> next;             
            cloneNode -> next = originalNode; 
            cloneNode = next;  
        }
        Node* tempNode = head;
        
        while(tempNode != NULL){
            if(tempNode -> next != NULL){
                // if(tempNode -> random != NULL){
                //     tempNode -> next -> random = tempNode -> random -> next;
                // }else{
                //     tempNode -> next = tempNode -> random;
                // }
                tempNode -> next -> random = tempNode -> random ? tempNode -> random -> next : tempNode -> random;
            }
            tempNode = tempNode -> next -> next;
        }
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL){
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;
            if(originalNode != NULL){
                cloneNode -> next = originalNode -> next;
            }
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
        
    }
};