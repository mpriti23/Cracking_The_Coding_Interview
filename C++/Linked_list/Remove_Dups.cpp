//Removing Duplicates fron a string 
//Cracking the coding interview
//2.linked list


#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
	int data = 0;
	Node * next = NULL;
};

void insert( Node * & head, int data )
{
	Node * newNode = new Node;
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

void printList( Node * head ) {
	while( head->next ) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout<<head->data;
	cout<<"\n";
}

void removeDuplicates( Node * head ) {
	if ( head == NULL || head->next == NULL) {
		return;
	}
	Node * curr = head;
	while(curr) {
		Node * runner = curr;
		while (runner->next != NULL) {
			if (runner->next->data == curr->data) {
				runner->next = runner->next->next;
			} else {
				runner = runner->next;
			}
		}
		curr = curr->next;
	}
}
void removeDuplicates1( Node * head ) {
	if ( head == NULL || ( head && (head->next == NULL) )) {
		return ;
	}
	std::unordered_map<int, int> node_map;
	Node * prev = head;
	Node * curr = head->next;
	node_map[head->data] = 1;
	while( curr != NULL ) {
		while (curr && node_map.find(curr->data) != node_map.end()) {
			curr = curr->next;
		}
		prev->next = curr;
		prev = curr;
		if (curr) {
			node_map[curr->data] = 1;
			curr = curr->next;
		}
	}
}


int main() {
	Node * head = NULL;
	
	insert(head, 1);
	insert(head, 1);
	insert(head, 2);
	insert(head, 3);
	insert(head, 2);
	
	
	printList(head);
	removeDuplicates(head);
	printList(head);

    cout << "Method 2 : \n";
	Node * head1 = NULL;
	insert(head1, 1);
	insert(head1, 1);
	insert(head1, 2);
	insert(head1, 3);
	insert(head1, 2);
	
	printList(head1);
	removeDuplicates1(head1);
	printList(head1);
	return 0;
}
