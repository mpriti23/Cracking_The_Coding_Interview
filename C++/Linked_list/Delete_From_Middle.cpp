// Deleting the middle element from linked list

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

void deleteFromMiddle( Node * head) {
    Node* temphead=head;
    int count=0;
    while(temphead){
        count++;
        temphead=temphead->next;
    }
    count=ceil(floor(count)/2);
    Node* curr=NULL;
    Node* x=head;
    while(--count){
        head=head->next;
    }
    curr=head;
    while(x){
        if(x->next==curr){
            x->next=curr->next;
            break;
        }
        x=x->next;
    }
}


int main() {
	Node * head = NULL;
	
	insert(head, 5);
	insert(head, 1);
	insert(head, 2);
	insert(head, 3);
	insert(head, 4);
	insert(head, 6);
	
	
	cout<<"List after Insertion is : ";
	printList(head);
	deleteFromMiddle(head);
	cout<<"List after Deletion of Middle element is : ";
	printList(head);

    return 0;
}
