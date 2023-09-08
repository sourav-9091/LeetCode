#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

int main() {

    Node n1(12);
    Node n2(24);

    Node *head = &n1;

    //dynamic 

    Node *n3 = new Node(10);
    Node *n4 = new Node(20);

    n1.next = &n2;

    cout<<n1.data<<" "<<n2.data<<endl;
    cout<<n1.next<<" "<<n2.next;
}   