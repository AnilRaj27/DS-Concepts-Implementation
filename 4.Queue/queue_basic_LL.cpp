#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *front=NULL , *rear=NULL;

void pushElement(){
	int val;
	cout<<"Enter the value: ";
	cin>>val;
	node *n = new node;
	n->data =val;
	n->next=NULL;
	if(front == NULL){
		front=n;
		rear=n;
	}
	else{
		rear->next=n;
		rear=n;
	}
}

int popElement(){
	if(front==NULL){
		return -1;
	}
	node *curr = front;
	front=front->next;
	if(front ==NULL)
		rear=NULL;
	int dat=curr->data;
	delete curr;
	return dat;
}

int main(){
	while(true){
	cout<<"\nEnter your choice\n";
	cout<<"1.PUSH / ENQUEUE\n";
	cout<<"2.POP / DEQUEUE\n";
	cout<<"3.FRONT\n";
	cout<<"4.EXIT\n";
	int choice;
	cin>>choice;
	switch(choice){
		case 1:
			pushElement();
			break;
		case 2:
			if(popElement() == -1){
				cout<<"\nUnderflow";
			}
			else{
				cout<<"\nPopped Element : ";	
			}
			break;
		case 3:
			if(front==NULL){
				cout<<"NULL"<<"\n";
				break;
			}
			cout<<front->data<<"\n";
			break;
		case 4:exit(0);	
	}
	}
	return 0;
}
