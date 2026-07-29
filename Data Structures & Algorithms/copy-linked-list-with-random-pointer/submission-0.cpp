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
public:

    Node* find(Node* ft , Node* sd, Node* target){
        while(ft != target){
            ft = ft -> next;
            sd = sd -> next;
        }
        return sd;
    }

    Node* copyRandomList(Node* head) {
        Node* c1 = head;
        Node* dummy = new Node(0);
        Node* c2 = dummy;


        while(c1){
            Node* new_ = new Node(c1 -> val);
            c2 -> next = new_;
            c2 = c2 -> next;
            c1 = c1 -> next;
        }

        c2 -> next = nullptr;

        c1 = head;
        c2 = dummy -> next;

        while(c1){
            c2 -> random = find(head ,dummy -> next, c1 -> random);
            c2 = c2 -> next;
            c1 = c1 -> next;
        }


        return dummy -> next;
    }
};