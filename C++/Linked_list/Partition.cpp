//Partiton in linked list

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data = 0;
	Node * next = NULL;
};

void insert( Node * & head, int data )
{
    if(head==NULL){
        Node * newNode = new Node;
        newNode->data = data;
        head = newNode;
    }else{
        Node * newNode = new Node;
        newNode->data = data;
        Node* x=head;
        while(x->next!=NULL){
            x=x->next;
        }
        x->next=newNode;
    }
}

void printList( Node * head ) {
	while( head->next ) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout<<head->data;
	cout<<"\n";
}

void partition( Node * head,int x) {
        Node* head1 = NULL; // head of first linked list
        Node* head2 = NULL; // head of second linked list
        Node* prev1 = NULL; // last visited node of 1st list
        Node* prev2 = NULL; // last visited node of 2nd list
 
        // curr is used to iterate in the given linked list
        Node* curr = head;
 
        // temporary node
        Node* temp = NULL;
 
        while(curr!=NULL)
        {
            temp = curr->next; // store next node's address 
 
            if(curr->data<x)
            {   // still if we haven't found the head of first linked list
                if(head1==NULL)
                {
                    head1 = curr;
                    prev1 = curr;
                    head1 -> next = NULL;
                }
                else
                {   // increase the node's of 1st linked list
                    prev1 -> next = curr;
                    prev1 = curr;
                    prev1 -> next = NULL;
                }
            }
            else
            {    
                if(head2==NULL)
                {   // still if we haven't found the head of second linked list
                    head2 = curr;
                    prev2 = curr;
                    head2 -> next = NULL;
                }
                else
                {   // increase the node's of 2nd linked list
                    prev2 -> next = curr;
                    prev2 = curr;
                    prev2 -> next = NULL;
                }
            }
            curr = temp;
        }
 
        // Given list is partitoned into two lists
        // with head1 and head2 as the head of the two list
        // join the two list 
 
        if(prev1==NULL)
            head=head2;
 
        prev1->next = head2;
 
        head=head1;

}


int main() {
	Node * head = NULL;
	
	insert(head, 3);
	insert(head, 5);
	insert(head, 8);
	insert(head, 5);
	insert(head, 10);
	insert(head, 2);
	insert(head, 1);
	
	
	cout<<"List after Insertion is : ";
	printList(head);
	partition(head,5);
	cout<<"List after Partition is : ";
	printList(head);

    return 0;
}
