#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL; 
    }

    Node(){}
};

Node* input(){

    int data;
    cin>>data;

    if(data==-1)
        return NULL;
    
    Node* newNode = new Node(data);
    newNode->next = input();

    return newNode;
}

void printList(Node* node){

    while(node!=NULL){
        cout<<node->data<<"->";
        node=node->next;
    }
    cout<<"null"<<endl;
}

int findMid(Node* node){

    Node *slow, *fast;
    slow = fast = node;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    } 

    return slow->data;
}

bool palindrome(Node* &node1, Node* node2){

    if(node2 == NULL)
        return true;

    bool result = palindrome(node1, node2->next);

    if(node1->data == node2->data && result){
        node1 = node1->next;
        return true;
    }

    return false;
}

int main(){
    Node* head = input();
    printList(head);
    // cout<<findMid(head)<<endl;

    if(palindrome(head, head))
        cout<<"Is Palindrome"<<endl;
    else 
        cout<<"Not a Palindrome"<<endl;

    return 0;
}