#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data,priority;
	node *next;
};

node *front = NULL,*rear =NULL;

void push(int d,int pr){
	node *p = front;
	node *n = new node;
	n->data=d;
	n->priority = pr;
	n->next = NULL;
	if(p == NULL){
		front = n;
	}
	else{
		if(front->priority < pr){
			n->next = front;
			front = n;
		}
		else{
			while(p->next != NULL && p->next->priority > pr){
				p=p->next;
			}
			n->next = p->next;
			p->next = n;
		}
	}
}

void display(){
	node *p=front;
	cout<<"\nDisplaying Elements\n";
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}

void pop(){
	if(front == NULL)
		cout<<"\nUnderflow\n";
	else{
		node *temp = front;
		front = front -> next;
		delete(temp);
		
	}
}

int main(){
	while(true){
		cout<<"\nEnter the Choice : \n";
		cout<<"1.ENQUEUE \n";
		cout<<"2.DEQUEUE \n";
		cout<<"3.FRONT \n";
		cout<<"4.EXIT \n";
		int choice;
		cin>>choice;
		switch(choice){
			case 1:
				int data,priority;
				cout<<"\nEnter the data and priority : ";
				cin>>data>>priority;
				push(data,priority);
				display();
				break;
			case 2:
				pop();
				break;
			case 3:
				if(front == NULL)
					cout<<"\n-1\n";
				else
					cout<<"\nFront is : "<<front->data<<"\n";
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}
