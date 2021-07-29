// Double Ended Queue -- Combination of stack and queue
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
	int data;
	node *next,*prev;
};

node *front=NULL , *rear = NULL;

void insfront(int d){
	node *n=new node;
	n->data = d;
	n->prev = n->next =NULL;
	if(front == NULL){
		front = rear = n;
	}
	else{
		n->next =front;
		front->prev = n;
		front =n;
	}
}

void insrear(int d){
	node *n = new node;
	n->data =d;
	n->next = n->prev = NULL;
	if(rear == NULL){
		rear=front = n;
	}
	else{
		rear->next = n;
		n->prev = rear;
		rear = n;
	}
}

void delfront(){
	if(front == NULL)
		cout<<"\n Underflow \n";
	else{
		node *temp = front;
		front = front->next;
		front -> prev =NULL;
		temp->next =NULL;
		cout<<"\n Popped : "<<temp->data<<"\n";
		delete temp;
	}
}

void delrear(){
	if(rear == NULL)
		cout<<"\n Underflow \n";
	else{
		node *temp = rear;
		rear = rear->prev;
		rear->next =NULL;
		temp->prev = NULL;
		cout<<"\n Popped : "<<temp->data<<"\n";
		delete temp;
		
	}
}

int main(){
	while(true){
		cout<<"\n\n\nEnter the Choice : \n";
		cout<<"1.Insert front \n";
		cout<<"2.Insert rear \n";
		cout<<"3.Delete front \n";
		cout<<"4.Delete rear \n";
		cout<<"5.Get front \n";
		cout<<"6.Get rear \n";
		cout<<"7.Exit \n\n";
		int choice;
		cin>>choice;
		cout<<"\n";
		switch(choice){
			case 1:
				int data;
				cout<<"\n Enter the data \n";
				cin>>data;
				insfront(data);
				break;
			case 2:
				int data1;
				cout<<"\n Enter the data \n";
				cin>>data1;
				insrear(data1);
				break;
			case 3:
				delfront();
				break;
			case 4:
				delrear();
				break;
			case 5:
				if(front == NULL)
					cout<<"\n -1 \n";
				else
					cout<<"\nFront Element "<<front->data<<"\n";
				break;
			case 6:
				if(rear == NULL)
					cout<<"\n -1 \n";
				else
					cout<<"\nRear Element "<<rear->data<<"\n";
				break;
			case 7:
				exit(0);
		}
	}
	return 0;
}
