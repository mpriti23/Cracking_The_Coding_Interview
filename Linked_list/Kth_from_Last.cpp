#include <iostream>
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

void kthfromlast( Node * head,int k ) {
    Node* temphead=head;
    int count=0;
    while(temphead){
        count++;
        temphead=temphead->next;
    }
    if(k<=0 || k>count){
        cout<<"The "<<k<<"th data from last is : invalid input\n";
    }else{
        Node* temp=NULL;
	Node* x=head;
	int l=k;
	while(k--){
	    temp=head;
	    head=head->next;
	}
	Node* curr=NULL;
	curr=x;
	while(temp!=NULL){
	    curr=x;
	    x=x->next;
	    temp=temp->next;
	}
	cout<<"The "<<l<<"-th data from last is : "<<curr->data<<"\n";
    }
}


int main() {
	Node * head = NULL;
	
	insert(head, 5);
	insert(head, 1);
	insert(head, 2);
	insert(head, 3);
	insert(head, 4);
	
	
	cout<<"List after Insertion is : ";
	printList(head);
	cout<<"\n";
	kthfromlast(head,1);
	kthfromlast(head,3);
	kthfromlast(head,0);
	kthfromlast(head,5);
	kthfromlast(head,7);
	

    return 0;
}
