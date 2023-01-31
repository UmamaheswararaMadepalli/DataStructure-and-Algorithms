#include<bits/stdc++.h>
using namespace std;
//node creation
class Node{
public:
	int data;
	Node* next;
    Node(int data){
           this -> data = data;
           this -> next =NULL;
    }
};
void insert(Node* &head,int data){
    Node* temp= new Node(data);
    head -> next =temp;
    head = head -> next;

}

int main(){
        int n;
        cin>>n;
        Node* head=new Node(0);
        Node* n1=head;
        for(int i=0;i<n;i++){
            insert(head,i);
        }
        while(n1!=NULL){
            cout<<n1 ->data<<" ";
            n1 =n1 -> next;

        }
        
}