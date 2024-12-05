#include <iostream>
/*======================================
 *Exerciseon double linked list



*/
using namespace std;

   struct Node{
   	  Node* prev;
   	  int data;
   	  Node* next;
   }*curr=NULL;

void display(){
	Node *curr1=curr;
	while(curr1->prev!=NULL){
		curr1=curr1->prev;
	}
	while(curr1!=NULL){
		cout<<curr1->data<<" ";
		curr1=curr1->next;
	}
	cout<<endl;
}
void insertBeginning(int value){
	 Node* temp=new Node;
	 temp->data=value;
	 temp->next=NULL;
	 temp->prev=NULL;
	 	if(curr==NULL){
	 		 curr=temp;
	 	}
	else{
		Node* curr1=curr;
		 while(curr1->prev!=NULL)
		      curr1=curr1->prev;
		    curr1->prev=temp;
		    temp->next=curr1;
	
	}
cout<<"\One Node is inserted!\n";
	 
}
int main(int argc, char** argv) {
	
	char ans;
	int choice;
	int value;
	do{
	
	cout<<"\n===============MENU=================\n";
	cout<<"Press 1 to insert at beginning.\n";
	cout<<"Press 2 to display the double linked.\n";
	cout<<"Press 5 to close.\n";
	    cout<<"Your chocie :";
	    cin>>choice;
	    switch(choice){
	    	case 1:
	    		cout<<"Enter value :";
	    		cin>>value;
	    		insertBeginning(value);
	    		break;
	    	case 2:
			display();
			break;
			case 5:
			 break;	
	    }
}while(ans!='n');
	return 0;
}