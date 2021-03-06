//even and odd palindrome

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
void reverse( Node * & head ) {
  if ( head == NULL  ||  head->next == NULL){
    return;
  }
  Node * newHead = NULL;
  Node * nextNode = NULL;
  while ( head ) {
    nextNode = head->next;
    head->next = newHead;
    newHead = head;
    head = nextNode;
  }
  head = newHead;
}

bool palindrome( Node * head) {
    Node* temphead=head;
    int count=0;
    while(temphead){
        count++;
        temphead=temphead->next;
    }
    count=ceil(float(count)/2);
    Node* x=head;
    while(count--){
        x=x->next;
    }
    reverse(x);
    while(x){
        if(x->data!=head->data){
            return false;
        }
        x=x->next;
        head=head->next;
    }
    return true;
}


int main() {
	Node * head = NULL;
	
	insert(head, 3);
	insert(head, 5);
	insert(head, 8);
	insert(head, 8);
	insert(head, 5);
	insert(head, 3);
	
	
	cout<<"List after Insertion is : ";
	printList(head);
	if(palindrome(head)){
	 cout<<"The linked list is a palindrome\n";
	}else{
	 cout<<"The linked list is NOT a palindrome\n";
	}

    Node * head1 = NULL;
	
	insert(head1, 3);
	insert(head1, 4);
	insert(head1, 8);
	insert(head1, 5);
	insert(head1, 3);
	
	
	cout<<"List after Insertion is : ";
	printList(head1);
	if(palindrome(head1)){
	 cout<<"The linked list is a palindrome\n";
	}else{
	 cout<<"The linked list is NOT a palindrome\n";
	}

    return 0;
}
