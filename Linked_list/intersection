//main logic leetcode

Node *getIntersectionNode(Node *headA, Node *headB) {
        set<Node*>s;
        while(headA!=NULL){
            s.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL){
            if(s.find(headB)!=s.end()){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
