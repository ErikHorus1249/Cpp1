#include<bits/stdc++.h>

using namespace std;


struct Node{
	int data;
	Node *next;
};
int main(){
	Node head;
	head->data = 2;
	head -> next = null;
	
	Node first;
	head -> data = 4;
	head -> next = null;
	
	Node second;
	head -> data = 16;
	head -> next = null;
	
	Node third;
	head -> data = -4;
	head -> next = null;
	
	Node end;
	head -> data = 24;
	head -> next = null;
	//linked
	head -> next = first;
	first -> next = second;
	second -> next = third;
	third -> next = end;
	//Use
	Node *p = head;
	while(p != null){
		int data = p->data;
		cout<< data << "" ;
		p -> next;
	}
}
