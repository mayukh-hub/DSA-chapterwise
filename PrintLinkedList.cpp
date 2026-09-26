#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};
class MyLinkedList{
    public:
    Node* head;
    Node* tail;
    int length;
    MyLinkedList(){
        head = NULL;
        tail = NULL;
        length = 0;
    }
    void insertAthead(int val){
        Node* n = new Node(val);
        if(length==0){
            head=tail=n;
        }else{
            n->next = head;
            head = n;
        }
        length++;
    }
    void printLinkedList(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    MyLinkedList list;
    list.insertAthead(30);
    list.insertAthead(20);
    list.insertAthead(10);

    list.printLinkedList();

}